/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPSecureKeyStandardLoaderRequestGenerating.h>
#import <TVPlayback/TVPSecureKeyStandardLoaderConnectionHandling.h>

@class NSString;

@interface TVPSecureKeyStandardConnector : NSObject <TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isStoreDomainURL:(id)arg1 ;
-(id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2 ;
-(id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3 ;
-(void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

