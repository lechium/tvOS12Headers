/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetImportProperties : PHAssetPropertySet {

	long long _importedBy;

}

@property (nonatomic,readonly) long long importedBy;              //@synthesize importedBy=_importedBy - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(long long)importedBy;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end
