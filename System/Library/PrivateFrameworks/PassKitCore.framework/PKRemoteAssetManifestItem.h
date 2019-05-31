/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSNumber, NSDictionary;

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding> {

	NSURL* _localURL;
	NSURL* _remoteURL;
	NSURL* _passURL;
	NSString* _sha1Hex;
	NSNumber* _size;
	NSDictionary* _manifest;

}

@property (nonatomic,copy) NSURL * localURL;                                     //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,copy) NSURL * remoteURL;                                    //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                      //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy) NSString * sha1Hex;                                   //@synthesize sha1Hex=_sha1Hex - In the implementation block
@property (nonatomic,copy) NSNumber * size;                                      //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSDictionary * manifest;                              //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,__weak,readonly) NSString * relativeLocalPath; 
+(id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4 ;
+(id)sharedURLSession;
+(BOOL)supportsSecureCoding;
-(unsigned long long)itemType;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(NSString *)sha1Hex;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSURL *)passURL;
-(NSString *)relativeLocalPath;
-(NSDictionary *)manifest;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isZipFile;
-(void)setLocalURL:(NSURL *)arg1 ;
-(void)setSha1Hex:(NSString *)arg1 ;
-(void)setManifest:(NSDictionary *)arg1 ;
-(id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4 ;
-(void)downloadAssetWithCompletion:(/*^block*/id)arg1 ;
-(NSNumber *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(NSURL *)localURL;
@end

