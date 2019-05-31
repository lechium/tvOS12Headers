/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying> {

	BOOL _available;
	NSURL* _fileURL;
	NSString* _fingerPrint;
	unsigned long long _fileSize;
	NSString* _fileUTI;
	CGSize _imageDimensions;

}

@property (nonatomic,copy) NSURL * fileURL;                                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                           //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) CGSize imageDimensions;                         //@synthesize imageDimensions=_imageDimensions - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                               //@synthesize fileUTI=_fileUTI - In the implementation block
+(id)identityFromStoredIdentity:(id)arg1 ;
+(id)fileUTIForExtension:(id)arg1 ;
+(id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)extensionForFileUTI:(id)arg1 ;
+(id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3 ;
+(id)identityForStorageName:(id)arg1 ;
+(Class)_identityImplementationClass;
+(void)setResourceIdentityImplementation:(Class)arg1 ;
+(Class)resourceIdentityImplementation;
+(id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)identityForStorage;
-(void)setFileURL:(NSURL *)arg1 ;
-(CGSize)imageDimensions;
-(NSString *)fingerPrint;
-(NSString *)fileUTI;
-(BOOL)isAvailable;
-(void)setImageDimensions:(CGSize)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setFingerPrint:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(unsigned long long)fileSize;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
@end
