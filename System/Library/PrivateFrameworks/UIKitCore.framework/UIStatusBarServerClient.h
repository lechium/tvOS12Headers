/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIStatusBarServerClient
@required
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const /*function pointer*/void**)arg2 withActions:(int)arg3;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;

@end

