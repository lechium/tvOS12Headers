/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSUIApplicationLaunchResponse;

@interface FBSUIApplicationLaunchResponseEvent : FBSWorkspaceEvent {

	FBSUIApplicationLaunchResponse* _response;

}

@property (nonatomic,retain) FBSUIApplicationLaunchResponse * response;              //@synthesize response=_response - In the implementation block
-(void)setResponse:(FBSUIApplicationLaunchResponse *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSUIApplicationLaunchResponse *)response;
@end

