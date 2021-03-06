/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMCoreOrganizationSettings.h>

@class RMiCloudOrganization, NSString;

@interface RMiCloudOrganizationSettings : RMCoreOrganizationSettings

@property (nonatomic,retain) RMiCloudOrganization * organization; 
@property (nonatomic,copy) NSString * passcode; 
-(void)setPasscode:(NSString *)arg1 ;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

