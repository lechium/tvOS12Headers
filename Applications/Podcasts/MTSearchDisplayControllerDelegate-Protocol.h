//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTEpisode, MTPodcast, MTSearchDisplayController, NSString;

@protocol MTSearchDisplayControllerDelegate <NSObject>

@optional
- (void)searchDisplayController:(MTSearchDisplayController *)arg1 didStoreSearch:(NSString *)arg2;
- (void)searchDisplayController:(MTSearchDisplayController *)arg1 didRecognizeUrlString:(NSString *)arg2;
- (void)searchDisplayController:(MTSearchDisplayController *)arg1 didSelectEpisode:(MTEpisode *)arg2;
- (void)searchDisplayController:(MTSearchDisplayController *)arg1 didSelectPodcast:(MTPodcast *)arg2;
- (void)searchDisplayControllerWillEndSearch:(MTSearchDisplayController *)arg1;
- (void)searchDisplayControllerWillBeginSearch:(MTSearchDisplayController *)arg1;
@end

