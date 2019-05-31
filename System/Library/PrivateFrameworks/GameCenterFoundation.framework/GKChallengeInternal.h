/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDate, NSOrderedSet, GKGameInternal, GKPlayerInternal;

@interface GKChallengeInternal : GKInternalRepresentation {

	NSString* _challengeID;
	NSString* _message;
	NSDate* _issueDate;
	NSDate* _completionDate;
	NSOrderedSet* _compatibleBundleIDs;
	GKGameInternal* _game;
	GKPlayerInternal* _issuingPlayer;
	GKPlayerInternal* _receivingPlayer;
	long long _state;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * challengeID;                          //@synthesize challengeID=_challengeID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSDate * issueDate;                              //@synthesize issueDate=_issueDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                         //@synthesize completionDate=_completionDate - In the implementation block
@property (assign,nonatomic) long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSOrderedSet * compatibleBundleIDs;              //@synthesize compatibleBundleIDs=_compatibleBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) GKGameInternal * game;                           //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * issuingPlayer;                //@synthesize issuingPlayer=_issuingPlayer - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * receivingPlayer;              //@synthesize receivingPlayer=_receivingPlayer - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * subtitleText; 
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSDate *)completionDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSString *)subtitleText;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(GKPlayerInternal *)receivingPlayer;
-(void)setIssuingPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)issuingPlayer;
-(NSString *)challengeID;
-(NSDate *)issueDate;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(id)findLocalGameBundleID;
-(void)setChallengeID:(NSString *)arg1 ;
-(void)setReceivingPlayer:(GKPlayerInternal *)arg1 ;
-(NSOrderedSet *)compatibleBundleIDs;
-(void)setCompatibleBundleIDs:(NSOrderedSet *)arg1 ;
-(void)setIssueDate:(NSDate *)arg1 ;
-(void)setGame:(GKGameInternal *)arg1 ;
-(GKGameInternal *)game;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(long long)state;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(unsigned long long)type;
-(void)setState:(long long)arg1 ;
-(NSString *)bundleID;
@end

