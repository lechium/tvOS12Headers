/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBundle.h>
#import <libobjc.A.dylib/CRKIdentifiedProviding.h>

@protocol CRKProviding;
@class NSString;

@interface _CRKProviderBundle : NSBundle <CRKIdentifiedProviding> {

	id<CRKProviding> _provider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(id)provider;
-(unsigned long long)displayPriorityForCard:(id)arg1 ;
-(id)cardViewControllerForCard:(id)arg1 ;
-(void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3 ;
-(void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_initializeProviderWithClass:(Class)arg1 ;
-(NSString *)providerIdentifier;
@end

