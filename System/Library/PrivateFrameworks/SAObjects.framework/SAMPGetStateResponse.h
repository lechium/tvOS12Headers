/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SAMPMediaItem, NSNumber;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * hashedGroupID; 
@property (nonatomic,retain) SAMPMediaItem * listeningToItem; 
@property (nonatomic,copy) NSNumber * listeningToMusicApplication; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) int state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getStateResponse;
+(id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)hashedGroupID;
-(void)setHashedGroupID:(NSString *)arg1 ;
-(SAMPMediaItem *)listeningToItem;
-(void)setListeningToItem:(SAMPMediaItem *)arg1 ;
-(NSNumber *)listeningToMusicApplication;
-(void)setListeningToMusicApplication:(NSNumber *)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
@end
