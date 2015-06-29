class SafeArray
{
public:
	SafeArray();
	void setdate(int num);
	int getdate(int num);
	int getsize();
private:
	int *date;
	int size;
	int longth;
};