/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLCloudSharedAlbumInvitationRecord, NSString;

@interface PLSharedAlbumSubscriberInfo : NSObject {

	BOOL _isOwner;
	PLCloudSharedAlbumInvitationRecord* _invitationRecord;
	NSString* _identifier;
	NSString* _email;
	NSString* _phone;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;

}

@property (nonatomic,retain,readonly) PLCloudSharedAlbumInvitationRecord * invitationRecord;              //@synthesize invitationRecord=_invitationRecord - In the implementation block
@property (nonatomic,readonly) BOOL isOwner;                                                              //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * email;                                                          //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * phone;                                                          //@synthesize phone=_phone - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                                    //@synthesize displayName=_displayName - In the implementation block
+(id)_allSubscribersForAlbum:(id)arg1 includeMyself:(BOOL)arg2 ;
+(id)allSubscribersForAlbum:(id)arg1 ;
+(id)allSubscribersForAvatarViewWithAlbumWithObjectID:(id)arg1 managedObjectContext:(id)arg2 ;
-(NSString *)email;
-(NSString *)phone;
-(id)initWithInvitationRecord:(id)arg1 identifier:(id)arg2 email:(id)arg3 phone:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 displayName:(id)arg7 isOwner:(BOOL)arg8 ;
-(PLCloudSharedAlbumInvitationRecord *)invitationRecord;
-(NSString *)firstName;
-(id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id*)arg2 outMatchingIdentifier:(id*)arg3 ;
-(NSString *)lastName;
-(BOOL)isOwner;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)displayName;
@end
