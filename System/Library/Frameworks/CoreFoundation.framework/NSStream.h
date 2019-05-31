/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NSStream : NSObject

@property (assign) id<NSStreamDelegate> delegate; 
@property (readonly) unsigned long long streamStatus; 
@property (copy,readonly) NSError * streamError; 
+(void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3 ;
+(void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
+(void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4 ;
-(unsigned long long)streamStatus;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(NSError *)streamError;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
-(id<NSStreamDelegate>)delegate;
-(void)open;
-(void)close;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
@end
