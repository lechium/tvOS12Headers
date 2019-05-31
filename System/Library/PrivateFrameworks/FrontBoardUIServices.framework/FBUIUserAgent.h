/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUIUserAgentInternal.h>

@class NSString;

@interface FBUIUserAgent : NSObject <FBUIUserAgentInternal> {

	BOOL _systemApp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;              //@synthesize systemApp=_systemApp - In the implementation block
+(id)sharedAgent;
-(id)processManager;
-(BOOL)isSystemApp;
-(id)sceneManager;
-(id)currentProcess;
-(void)setSystemApp:(BOOL)arg1 ;
-(id)init;
-(id)mainQueue;
@end

