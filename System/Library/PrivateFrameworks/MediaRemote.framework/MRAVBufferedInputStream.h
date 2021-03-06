/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>

@protocol NSStreamDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSRunLoop, NSObject, NSMutableData;

@interface MRAVBufferedInputStream : NSInputStream {

	unsigned long long _status;
	id<NSStreamDelegate> _delegate;
	NSMutableDictionary* _properties;
	NSRunLoop* _scheduledRunLoop;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableData* _buffer;

}
-(unsigned long long)streamStatus;
-(id)initWithFileAtPath:(id)arg1 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)streamError;
-(void)notifyDelegateOfStreamEvent:(unsigned long long)arg1 ;
-(void)_onRunLoop_notifyDelegateOfStreamEvent:(unsigned long long)arg1 ;
-(void)handleDataReceived:(id)arg1 ;
-(void)handleStreamDisconnect;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithURL:(id)arg1 ;
-(void)open;
-(void)close;
-(void)_init;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithData:(id)arg1 ;
@end

