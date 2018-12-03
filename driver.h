
#define FAIL -1
#define MAX_TICKERS 15
#define MAX_TICKER_LENGTH 5


typedef struct {
  char symbol[50];
  char companyName[100];
  char primaryExchange[100];
  char sector[50];
  char calculationPrice[50];
  float open;
  int openTime;
  float close;
  int closeTime;
  float high;
  float low;
  float latestPrice;
  char latestSource[100];
  char latestTime[50];
  int latestUpdate;
  int latestVolume;
  float iexRealtimePrice;
  float iexRealtimeSize;
  int iexLastUpdated;
  float delayedPrice;
  int delayedPriceTime;
  float previousClose;
  float change;
  float changePercent;
  float iexMarketPercent;
  int iexVolume;
  int avgTotalVolume;
  float iexBidPrice;
  int iexBidSize;
  float iexAskPrice;
  int iexAskSize;
  int marketCap;
  float peRatio;
  float week52High;
  float week52Low;
  float ytdChange;
} Stock;
