/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, OS_dispatch_source;
@class NSMutableArray, TVSWiFiThroughputMeasurementTask, TVSWiFiNetwork, NSObject;

@interface TVSWiFiQualityMeasurement : NSObject {

	unsigned long long _downloadedBytes;
	double _downloadDuration;
	NSMutableArray* _networkData;
	id<NSObject> _urlBagLoadObserver;
	unsigned long long _state;
	TVSWiFiThroughputMeasurementTask* _throughputMeasurementTask;
	TVSWiFiNetwork* _connectedWiFiNetwork;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_source> _urlBagWatchdog;

}

@property (assign,nonatomic) unsigned long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) TVSWiFiThroughputMeasurementTask * throughputMeasurementTask;              //@synthesize throughputMeasurementTask=_throughputMeasurementTask - In the implementation block
@property (assign,nonatomic) unsigned long long downloadedBytes;                                        //@synthesize downloadedBytes=_downloadedBytes - In the implementation block
@property (assign,nonatomic) double downloadDuration;                                                   //@synthesize downloadDuration=_downloadDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * networkData;                                              //@synthesize networkData=_networkData - In the implementation block
@property (nonatomic,retain) id<NSObject> urlBagLoadObserver;                                           //@synthesize urlBagLoadObserver=_urlBagLoadObserver - In the implementation block
@property (nonatomic,retain) TVSWiFiNetwork * connectedWiFiNetwork;                                     //@synthesize connectedWiFiNetwork=_connectedWiFiNetwork - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> urlBagWatchdog;                              //@synthesize urlBagWatchdog=_urlBagWatchdog - In the implementation block
+(unsigned long long)compareIdeal:(id)arg1 withActual:(id)arg2 ;
-(void)setDownloadDuration:(double)arg1 ;
-(double)downloadDuration;
-(unsigned long long)downloadedBytes;
-(NSMutableArray *)networkData;
-(TVSWiFiNetwork *)connectedWiFiNetwork;
-(TVSWiFiThroughputMeasurementTask *)throughputMeasurementTask;
-(void)setConnectedWiFiNetwork:(TVSWiFiNetwork *)arg1 ;
-(NSObject*<OS_dispatch_source>)urlBagWatchdog;
-(void)setUrlBagWatchdog:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_startWithCompletion:(/*^block*/id)arg1 ;
-(void)setUrlBagLoadObserver:(id<NSObject>)arg1 ;
-(id<NSObject>)urlBagLoadObserver;
-(void)_recordCurrentNetworkData;
-(void)setThroughputMeasurementTask:(TVSWiFiThroughputMeasurementTask *)arg1 ;
-(void)_recordDownloadSize:(unsigned long long)arg1 in:(double)arg2 ;
-(void)setDownloadedBytes:(unsigned long long)arg1 ;
-(void)measureQualityWithCompletion:(/*^block*/id)arg1 ;
-(void)setNetworkData:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end
