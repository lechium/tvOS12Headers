/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBOrientationServiceServer;

@interface FBOrientationService : NSObject {

	FBOrientationServiceServer* _server;

}
+(id)sharedInstance;
-(void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 ;
-(id)init;
@end

