/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUISceneClientIdentity;


@protocol FBUISceneClientWorkspace <NSObject>
@property (nonatomic,retain,readonly) id<FBUIProcess> clientProcess; 
@property (nonatomic,copy,readonly) FBUISceneClientIdentity * clientIdentity; 
@required
-(id<FBUIProcess>)clientProcess;
-(FBUISceneClientIdentity *)clientIdentity;
-(id)clientForSceneIdentifier:(id)arg1;
-(void)beginTransaction;
-(void)endTransaction;

@end

