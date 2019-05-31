/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _MSVStreamWriterPendingData : NSObject {

	NSData* _data;
	/*^block*/id _completionHandler;
	long long _bytesWritten;

}

@property (nonatomic,copy) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(long long)bytesWritten;
-(void)setBytesWritten:(long long)arg1 ;
-(id)completionHandler;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
@end
