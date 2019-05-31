/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKPropertyCoding.h>

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject <CKPropertyCoding>

@property (nonatomic,readonly) CKObjCClass * objcClass; 
@property (nonatomic,readonly) NSSet * propertyNamesNotToEncode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKObjCClass *)objcClass;
-(NSSet *)propertyNamesNotToEncode;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)dictionaryPropertyEncoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

