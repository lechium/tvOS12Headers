/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBundle.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@protocol CRSServing;
@class NSString;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing> {

	id<CRSServing> _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)underlyingService;
-(NSString *)serviceIdentifier;
-(void)_initializeServiceWithClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

