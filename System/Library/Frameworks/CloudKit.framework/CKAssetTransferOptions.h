/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _sparseAware;
	NSNumber* _shouldFetchAssetContent;
	NSNumber* _shouldFetchAssetContentInMemory;

}

@property (nonatomic,copy) NSNumber * sparseAware;                                  //@synthesize sparseAware=_sparseAware - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContent;                      //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSparseAware:(NSNumber *)arg1 ;
-(id)CKPropertiesDescription;
-(NSNumber *)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(NSNumber *)arg1 ;
-(NSNumber *)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(NSNumber *)arg1 ;
-(NSNumber *)sparseAware;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

