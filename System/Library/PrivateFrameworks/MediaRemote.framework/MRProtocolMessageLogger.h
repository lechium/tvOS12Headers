/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRProtocolMessageLogger : NSObject {

	BOOL _shouldLog;

}

@property (assign,nonatomic) BOOL shouldLog;              //@synthesize shouldLog=_shouldLog - In the implementation block
+(id)sharedLogger;
-(void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3 ;
-(void)setShouldLog:(BOOL)arg1 ;
-(id)init;
-(BOOL)shouldLog;
@end

