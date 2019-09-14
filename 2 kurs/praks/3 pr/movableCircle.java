package prak_3;

public class movableCircle implements movable{
	private int radius;
	private MovablePoint center=new MovablePoint();
	
	public movableCircle(int radius,int x1,int y1) {
		this.radius=radius;
		center.setX(x1);
		center.setY(y1);
	}
	public void moveUp() {
		center.y++;
	}
	public void moveDown() {
		center.y--;
	}
	public void moveLeft() {
		center.x--;
	}
	public void moveRight() {
		center.x++;
	}
	
	public int getRadius() {
		return radius;
	}
	public MovablePoint getCenter() {
		return center;
	}

	public class MovablePoint implements movable {
		public int x;
		public int y;
		
		public int getX() {
			return x;
		}
		public void setX(int x) {
			this.x = x;
		}
		public int getY() {
			return y;
		}
		public void setY(int y) {
			this.y = y;
		}
		public void moveUp() {
			y++;
		}
		public void moveDown() {
			y--;
		}
		public void moveLeft() {
			x--;
		}
		public void moveRight() {
			x++;
		}
		
	}
}
