#include <string>


class HeartRate
{
	public:
		explicit HeartRate(); 		
		        void setFirstName(std::string);
		        void setLastName(std::string);	
		        void setbirthday(int);
	                void setbirthmonth(int);
                        void setbirthyear(int);
                        std::string getFirstName() const;
                        std::string getLastName() const; 
                        int getbirthday() const;
	                int getbirthmonth() const;
	                int getbirthyear() const;


			int getAge();
			int getMaxiumumHeartRate(int);                                                                        
			
			void getTargetHeartRate(int);
			void displayHeartRate(int) const;			
			                                                                                         
	private:
			std::string firstName;  
			std::string lastName;

	       		int birthday;
	
		       	int birthmonth;
	 
			int birthyear;
};			
