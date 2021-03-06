/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRLearningSession.h>

@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession {

	CoreRCManagerClient* _manager;

}

@property (assign,nonatomic) CoreRCManagerClient * manager;              //@synthesize manager=_manager - In the implementation block
-(BOOL)startLearningCommand:(unsigned long long)arg1 ;
-(void)endLearning;
-(CoreRCManagerClient *)manager;
-(void)setManager:(CoreRCManagerClient *)arg1 ;
@end

