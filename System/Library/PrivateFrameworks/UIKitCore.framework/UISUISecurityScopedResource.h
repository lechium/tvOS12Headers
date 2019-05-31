/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, FPSandboxingURLWrapper;

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding> {

	BOOL _hasActiveAccessAssertion;
	NSURL* _url;
	long long _allowedAccess;
	FPSandboxingURLWrapper* _sandboxExtensionWrapper;
	long long _underlyingSandboxAssertionHandle;

}

@property (nonatomic,retain) FPSandboxingURLWrapper * sandboxExtensionWrapper;              //@synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper - In the implementation block
@property (assign,nonatomic) long long allowedAccess;                                       //@synthesize allowedAccess=_allowedAccess - In the implementation block
@property (assign,nonatomic) BOOL hasActiveAccessAssertion;                                 //@synthesize hasActiveAccessAssertion=_hasActiveAccessAssertion - In the implementation block
@property (assign,nonatomic) long long underlyingSandboxAssertionHandle;                    //@synthesize underlyingSandboxAssertionHandle=_underlyingSandboxAssertionHandle - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL sourceIsManaged; 
+(BOOL)supportsSecureCoding;
+(id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3 ;
+(id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2 ;
+(id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2 ;
+(id)readonlySandboxExtensionClassString;
+(id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3 ;
+(id)_sandboxExtensionClassForAllowedAccess:(long long)arg1 ;
+(id)readwriteSandboxExtensionClassString;
+(id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2 ;
+(BOOL)_isValidURLForIssuingSandboxExtension:(id)arg1 ;
+(id)uniquedSecurityScopedResources:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(BOOL)sourceIsManaged;
-(void)startAccessing;
-(void)stopAccessing;
-(id)initWithAbsoluteURL:(id)arg1 sandboxExtensionWrapper:(id)arg2 allowedAccess:(long long)arg3 ;
-(long long)allowedAccess;
-(BOOL)hasActiveAccessAssertion;
-(void)setHasActiveAccessAssertion:(BOOL)arg1 ;
-(BOOL)_isEqualAccessToSecurityScopedResource:(id)arg1 ;
-(void)setAllowedAccess:(long long)arg1 ;
-(FPSandboxingURLWrapper *)sandboxExtensionWrapper;
-(void)setSandboxExtensionWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(long long)underlyingSandboxAssertionHandle;
-(void)setUnderlyingSandboxAssertionHandle:(long long)arg1 ;
@end

