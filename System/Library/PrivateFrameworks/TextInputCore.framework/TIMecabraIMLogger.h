/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface TIMecabraIMLogger : NSObject {

	NSMutableString* _loggedMessage;

}

@property (nonatomic,retain) NSMutableString * loggedMessage;              //@synthesize loggedMessage=_loggedMessage - In the implementation block
+(BOOL)isLoggingEnabled;
-(NSMutableString *)loggedMessage;
-(void)beginLogging;
-(void)markTime:(unsigned long long)arg1 ;
-(id)logFilePath;
-(void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2 ;
-(void)writeLogToFile;
-(void)setLoggedMessage:(NSMutableString *)arg1 ;
@end
