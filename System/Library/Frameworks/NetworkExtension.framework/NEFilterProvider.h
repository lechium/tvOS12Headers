/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEFilterProviderConfiguration, NSString;

@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling> {

	NEFilterProviderConfiguration* _filterConfiguration;

}

@property (retain) NEFilterProviderConfiguration * filterConfiguration;              //@synthesize filterConfiguration=_filterConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFilterConfiguration:(NEFilterProviderConfiguration *)arg1 ;
-(void)stopFilterWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startFilterWithCompletionHandler:(/*^block*/id)arg1 ;
-(NEFilterProviderConfiguration *)filterConfiguration;
@end
