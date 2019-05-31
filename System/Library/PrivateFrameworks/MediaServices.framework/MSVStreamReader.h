/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSInputStream, NSObject, NSString;

@interface MSVStreamReader : NSObject <NSStreamDelegate> {

	BOOL _closeOnStop;
	BOOL _stopped;
	z_stream_s* _zstreamp;
	BOOL _compress;
	/*^block*/id _didReadDataBlock;
	/*^block*/id _didFinishReadingBlock;
	/*^block*/id _didEncounterErrorBlock;
	unsigned long long _maximumBufferSize;
	double _timestamp;
	NSInputStream* _stream;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSInputStream * stream;                            //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id didReadDataBlock;                                 //@synthesize didReadDataBlock=_didReadDataBlock - In the implementation block
@property (nonatomic,copy) id didFinishReadingBlock;                            //@synthesize didFinishReadingBlock=_didFinishReadingBlock - In the implementation block
@property (nonatomic,copy) id didEncounterErrorBlock;                           //@synthesize didEncounterErrorBlock=_didEncounterErrorBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maximumBufferSize;              //@synthesize maximumBufferSize=_maximumBufferSize - In the implementation block
@property (assign,getter=shouldCompress,nonatomic) BOOL compress;               //@synthesize compress=_compress - In the implementation block
@property (nonatomic,readonly) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_shouldHandleEvent;
-(void)readAllDataWithCompletion:(/*^block*/id)arg1 ;
-(id)didFinishReadingBlock;
-(id)didReadDataBlock;
-(id)_compressedDataForData:(id)arg1 ;
-(id)readAllDataWithError:(id*)arg1 ;
-(void)readAllDataIntoFileHandle:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)maximumBufferSize;
-(id)initWithInputStream:(id)arg1 queue:(id)arg2 ;
-(void)setDidEncounterErrorBlock:(id)arg1 ;
-(void)setDidReadDataBlock:(id)arg1 ;
-(void)setDidFinishReadingBlock:(id)arg1 ;
-(void)setMaximumBufferSize:(unsigned long long)arg1 ;
-(void)setStream:(NSInputStream *)arg1 ;
-(id)didEncounterErrorBlock;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldCompress;
-(NSInputStream *)stream;
-(void)setCompress:(BOOL)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(void)stop;
-(void)start;
-(void)_stop;
-(NSObject*<OS_dispatch_queue>)queue;
@end
