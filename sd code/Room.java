public class Room {
    private int id;
    private boolean isAvailable;

    public Room(int id) {
        this.id = id;
        this.isAvailable = true;
    }

    // Getters and setters for id and availability status
    public int getId() {
        return id;
    }

    public boolean isAvailable() {
        return isAvailable;
    }

    public void setAvailable(boolean available) {
        isAvailable = available;
    }
}
