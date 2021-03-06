/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKInstallSheetStatusUpdateRequest : SKRequest {

	BOOL _isInstallSheetOpen;
	/*^block*/id _completionHandler;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL isInstallSheetOpen;              //@synthesize isInstallSheetOpen=_isInstallSheetOpen - In the implementation block
-(void)_handleReply:(id)arg1 ;
-(void)setIsInstallSheetOpen:(BOOL)arg1 ;
-(id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isInstallSheetOpen;
-(id)completionHandler;
-(void)_start;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
@end

