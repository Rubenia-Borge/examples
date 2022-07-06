#include <iostream>

using namespace std;

class Business {
   public:
      
      
      void SetName(string busName) {
         name = busName;
      }

      void SetAddress(string busAddress) {
         address = busAddress;
      }
      
      string GetDescription() const {
         return name + " -- " + address;
      }

   protected:
      string name;
      string address;
};

class Restaurant : public Business {
   public:
      
      
      void SetRating(int userRating) {
         rating = userRating;
      }

      int GetRating() const {
         return rating;
      }
      string GetDescription() const {
         return name + " -- " + address + 
            "\n  Rating: " + to_string(rating);
      }

   private:
      int rating;
};

int main() {
   Restaurant favoritePlace;
   favoritePlace.SetName("Friends Cafe");
   favoritePlace.SetAddress("500 W 2nd Ave");
   favoritePlace.SetRating(5);
   cout << favoritePlace.GetDescription() << endl;

   return 0;
}
