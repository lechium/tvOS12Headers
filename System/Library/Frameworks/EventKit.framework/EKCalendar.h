/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class EKSource, NSString;

@interface EKCalendar : EKObject {

	unsigned long long _cachedJunkStatus;

}

@property (assign,nonatomic) unsigned long long cachedJunkStatus;                            //@synthesize cachedJunkStatus=_cachedJunkStatus - In the implementation block
@property (nonatomic,retain) EKSource * source; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) BOOL allowsContentModifications; 
@property (getter=isSubscribed,nonatomic,readonly) BOOL subscribed; 
@property (getter=isImmutable,nonatomic,readonly) BOOL immutable; 
@property (assign,nonatomic) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(BOOL)isWeakRelationship;
+(id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(id)calendarForEntityTypes:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(id)typeDescription:(long long)arg1 ;
+(id)rowIDsForCalendars:(id)arg1 ;
+(id)calendarWithEventStore:(id)arg1 ;
-(unsigned)flags;
-(BOOL)hasEvents;
-(BOOL)canBeShared;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(BOOL)isSubscribed;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(id)colorString;
-(id)sharees;
-(id)externalIDTag;
-(void)setExternalIDTag:(id)arg1 ;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)syncToken;
-(void)setSyncToken:(id)arg1 ;
-(id)externalRepresentation;
-(void)setExternalRepresentation:(id)arg1 ;
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(void)setColorString:(id)arg1 ;
-(int)displayOrder;
-(void)setDisplayOrder:(int)arg1 ;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(id)sharedOwnerName;
-(void)setSharedOwnerName:(id)arg1 ;
-(id)sharedOwnerAddress;
-(void)setSharedOwnerAddress:(id)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)isPublished;
-(void)setSharees:(id)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(id)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(id)arg1 ;
-(id)selfIdentityEmail;
-(void)setSelfIdentityEmail:(id)arg1 ;
-(id)selfIdentityPhoneNumber;
-(void)setSelfIdentityPhoneNumber:(id)arg1 ;
-(id)selfIdentityAddress;
-(void)setSelfIdentityAddress:(id)arg1 ;
-(id)selfIdentityFirstName;
-(void)setSelfIdentityFirstName:(id)arg1 ;
-(id)selfIdentityLastName;
-(void)setSelfIdentityLastName:(id)arg1 ;
-(id)ownerIdentityDisplayName;
-(void)setOwnerIdentityDisplayName:(id)arg1 ;
-(id)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(id)arg1 ;
-(id)ownerIdentityPhoneNumber;
-(void)setOwnerIdentityPhoneNumber:(id)arg1 ;
-(id)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(id)arg1 ;
-(id)ownerIdentityFirstName;
-(void)setOwnerIdentityFirstName:(id)arg1 ;
-(id)ownerIdentityLastName;
-(void)setOwnerIdentityLastName:(id)arg1 ;
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(id)subcalAccountID;
-(void)setSubcalAccountID:(id)arg1 ;
-(id)pushKey;
-(void)setPushKey:(id)arg1 ;
-(void)setDigest:(id)arg1 ;
-(id)allAlarms;
-(id)sharedOwnerEmail;
-(id)sharedOwnerPhoneNumber;
-(id)sharedOwnerURL;
-(id)externalURI;
-(unsigned long long)allowedEntityTypes;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(BOOL)couldBeJunk;
-(BOOL)allowsContentModifications;
-(BOOL)isMutableSuggestionsCalendar;
-(BOOL)isMutableNaturalLanguageSuggestionsCalendar;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(BOOL)isNaturalLanguageSuggestedEventCalendar;
-(void)setAllAlarms:(id)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAllSnoozedAlarms;
-(unsigned long long)cachedJunkStatus;
-(void)setCachedJunkStatus:(unsigned long long)arg1 ;
-(BOOL)supportsJunkReporting;
-(id)sendersEmail;
-(id)sendersPhoneNumber;
-(BOOL)allowReminders;
-(BOOL)commit:(id*)arg1 ;
-(unsigned long long)supportedEventAvailabilities;
-(BOOL)allowsScheduling;
-(BOOL)isDefaultSchedulingCalendar;
-(BOOL)isFacebookBirthdayCalendar;
-(BOOL)isSubscribedHolidayCalendar;
-(BOOL)allowEvents;
-(BOOL)automaticEventLocationGeocodingAllowed;
-(void)clearInvitationStatus;
-(void)_clearCGColorCache;
-(id)unlocalizedTitle;
-(BOOL)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3 ;
-(BOOL)_flagValueWithMask:(unsigned)arg1 ;
-(void)_setFlagValue:(BOOL)arg1 withMask:(unsigned)arg2 ;
-(BOOL)prohibitsScheduling;
-(void)setProhibitsScheduling:(BOOL)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(void)setCanBePublished:(BOOL)arg1 ;
-(int)_allowedEntities;
-(void)_setAllowedEntities:(int)arg1 ;
-(void)addAlarms:(id)arg1 ;
-(void)removeAlarms:(id)arg1 ;
-(void)setCGColor:(CGColorRef)arg1 ;
-(void)setAllowsContentModifications:(BOOL)arg1 ;
-(void)setIsDefaultSchedulingCalendar:(BOOL)arg1 ;
-(BOOL)isInbox;
-(void)setInbox:(BOOL)arg1 ;
-(BOOL)isNotificationsCollection;
-(void)setNotificationsCollection:(BOOL)arg1 ;
-(void)setImmutable:(BOOL)arg1 ;
-(void)setAllowsScheduling:(BOOL)arg1 ;
-(BOOL)isSharingInvitation;
-(void)setSharingInvitation:(BOOL)arg1 ;
-(id)publishURL;
-(void)setPublishURL:(id)arg1 ;
-(BOOL)canBePublished;
-(void)setFacebookBirthdayCalendar:(BOOL)arg1 ;
-(BOOL)isHolidaySubscribedCalendar;
-(void)setSubscribedHolidayCalendar:(BOOL)arg1 ;
-(BOOL)isFamilyCalendar;
-(void)setFamilyCalendar:(BOOL)arg1 ;
-(BOOL)isMarkedUndeletable;
-(BOOL)isMarkedImmutableSharees;
-(BOOL)isSuggestionsCalendar;
-(BOOL)isIgnoringEventAlerts;
-(void)setIsIgnoringEventAlerts:(BOOL)arg1 ;
-(BOOL)allowsIgnoringSharedEventChangeNotifications;
-(BOOL)isIgnoringSharedCalendarNotifications;
-(void)setIsIgnoringSharedCalendarNotifications:(BOOL)arg1 ;
-(id)syncHash;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(void)setAllowReminders:(BOOL)arg1 ;
-(void)addSharee:(id)arg1 ;
-(void)removeSharee:(id)arg1 ;
-(void)setIsJunk:(BOOL)arg1 ;
-(BOOL)remove:(id*)arg1 ;
-(void)setSubscribed:(BOOL)arg1 ;
-(BOOL)isManaged;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)isImmutable;
-(BOOL)validate:(id*)arg1 ;
-(int)entityType;
-(id)digest;
-(BOOL)refresh;
-(void)setNotes:(id)arg1 ;
-(id)notes;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(unsigned long long)sharingStatus;
-(BOOL)isSuggestedEventCalendar;
-(id)init;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(long long)type;
-(void)reset;
-(CGColorRef)CGColor;
-(void)setSource:(EKSource *)arg1 ;
-(EKSource *)source;
-(BOOL)hasTasks;
-(NSString *)calendarIdentifier;
-(void)_setSource:(id)arg1 ;
@end

