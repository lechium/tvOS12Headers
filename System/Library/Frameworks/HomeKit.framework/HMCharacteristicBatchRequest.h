/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject {

	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;
	NSArray* _requests;

}

@property (nonatomic,retain) NSArray * requests;              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) id progressHandler;                //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)validateRequestTypes:(id)arg1 requestClass:(Class)arg2 ;
+(id)characteristicBatchRequestWithWriteRequests:(id)arg1 ;
+(id)characteristicBatchRequestWithReadRequests:(id)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(id)progressHandler;
-(id)initWithRequests:(id)arg1 requestClass:(Class)arg2 ;
-(id)completionHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
@end
