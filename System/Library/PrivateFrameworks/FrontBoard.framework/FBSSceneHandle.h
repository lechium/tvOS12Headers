/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneHandle <NSObject>
@required
-(id)specification;
-(id)hostProcess;
-(id)clientProcess;
-(id)callOutQueue;
-(id)counterpartAgent;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
-(void)closeSession:(id)arg1;
-(id)sessionForIdentifier:(id)arg1;
-(id)identifier;
-(id)parameters;

@end
