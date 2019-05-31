/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspace.h>
#import <libobjc.A.dylib/FBSUIApplicationWorkspaceClientDelegate.h>

@class NSString;

@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate>

@property (assign,nonatomic,__weak) id<FBSUIApplicationWorkspaceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)client:(id)arg1 handleLaunch:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)client:(id)arg1 handleExit:(id)arg2 ;
-(void)clientHandleAssertionExpirationImminent:(id)arg1 ;
-(Class)_clientClass;
-(BOOL)isUIApplicationWorkspace;
@end

