/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface HSCloudItemIDList : NSObject <NSSecureCoding> {

	NSMutableArray* _itemIDs;
	NSMutableArray* _idTypes;

}

@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(void)enumerateCloudItemIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

