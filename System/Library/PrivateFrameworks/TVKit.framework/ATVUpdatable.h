/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATVUpdatable
@optional
-(void)restoreState:(id)arg1;
-(void)updateWithFeedElement:(id)arg1 state:(id)arg2 forceReload:(BOOL)arg3;
-(void)reloadPage;
-(id)currentState;

@required
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1;

@end

