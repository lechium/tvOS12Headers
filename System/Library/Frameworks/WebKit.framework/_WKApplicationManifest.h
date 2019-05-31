/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface _WKApplicationManifest : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<API::ApplicationManifest> _applicationManifest;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * shortName; 
@property (nonatomic,copy,readonly) NSString * applicationDescription; 
@property (nonatomic,copy,readonly) NSURL * scope; 
@property (nonatomic,copy,readonly) NSURL * startURL; 
@property (nonatomic,readonly) long long displayMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)applicationManifestFromJSON:(id)arg1 manifestURL:(id)arg2 documentURL:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSString *)shortName;
-(NSString *)applicationDescription;
-(NSURL *)startURL;
-(Object*)_apiObject;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(long long)displayMode;
-(NSURL *)scope;
@end

