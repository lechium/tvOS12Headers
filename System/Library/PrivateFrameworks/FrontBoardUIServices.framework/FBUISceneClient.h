/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneClient.h>

@protocol FBUISceneClient <FBUISceneClientProxy>
@required
-(void)registerWithDelegate:(id)arg1;
-(void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2;

@end


@protocol FBUISceneHostProxy;
@class NSString;

@interface FBUISceneClient : NSObject <FBUISceneClient> {

	NSString* _identifier;
	id<FBUISceneHostProxy> _hostProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)didInvalidateSceneHost:(id)arg1 ;
-(void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHost:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)registerWithDelegate:(id)arg1 ;
-(void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2 ;
-(NSString *)description;
-(id)initWithIdentifier:(id)arg1 ;
@end

