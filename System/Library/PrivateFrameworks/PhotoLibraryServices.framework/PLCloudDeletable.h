/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLCloudDeletable <NSObject>
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@required
+(id)cloudUUIDKeyForDeletion;
+(long long)cloudDeletionTypeForTombstone:(id)arg1;
-(long long)cloudDeletionType;
-(short)cloudDeleteState;
-(void)setCloudDeleteState:(short)arg1;
-(NSString *)cloudUUIDForDeletion;

@end
