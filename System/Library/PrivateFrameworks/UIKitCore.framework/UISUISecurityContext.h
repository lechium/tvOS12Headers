/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding> {

	long long _activationCount;
	NSMutableArray* _URLsBeingAccessed;
	NSArray* _securityScopedResources;

}

@property (nonatomic,readonly) NSArray * securityScopedResources;              //@synthesize securityScopedResources=_securityScopedResources - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isActive;
-(void)activate;
-(void)deactivate;
-(id)initWithSecurityScopedResources:(id)arg1 ;
-(NSArray *)securityScopedResources;
-(id)securityScopedResourcesMatchingPredicate:(/*^block*/id)arg1 ;
-(id)accessibleURLs;
@end

