/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreSocialRequestOperationDataSource.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialUnblockOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource> {

	MPModelSocialPerson* _person;

}

@property (nonatomic,retain) MPModelSocialPerson * person;              //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queryItems;
-(id)bagKey;
-(id)httpBody;
-(long long)httpBodyType;
-(long long)httpMethod;
-(void)setPerson:(MPModelSocialPerson *)arg1 ;
-(MPModelSocialPerson *)person;
@end

