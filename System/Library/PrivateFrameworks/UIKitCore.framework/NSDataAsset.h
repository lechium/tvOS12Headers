/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CUINamedData, NSString, NSData;

@interface NSDataAsset : NSObject <NSCopying> {

	CUINamedData* _namedData;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)typeIdentifier;
-(id)initWithName:(id)arg1 ;
@end

