/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSAppLinkPlugIn.h>

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn
-(id)callingBundleIdentifier;
-(BOOL)appHasApproval:(id)arg1 ;
-(id)applicationProxiesForSWCResults:(id)arg1 useDetailsDictionary:(BOOL)arg2 ;
-(id)appLinksForSWCResults:(id)arg1 useDetailsDictionary:(BOOL)arg2 ;
-(void)getAppLinksForServiceAtIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAppLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
@end

