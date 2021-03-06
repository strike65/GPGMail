/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RemoteStoreQuota.h"

@class NSPopUpButton, NSTextField, NSView, QuotaBar;

@interface IMAPQuota : RemoteStoreQuota
{
    NSPopUpButton *_quotaPopup;
    NSTextField *_quotaPopupLabel;
    NSView *_quotaContainerView;
    QuotaBar *_quotaBar;
    NSTextField *_capacityField;
    NSTextField *_statusField;
    double _spaceUnderQuotaPopup;
}

- (id)_stringForSize:(unsigned long long)arg1 andCount:(long long)arg2 isCapacity:(BOOL)arg3;
- (void)_updateUIForQuotaName:(id)arg1 updateTable:(BOOL)arg2;
- (void)engineUpdated:(id)arg1;
- (void)engineDidFinish;
- (void)_updateQuotaPopupWithQuotaNames:(id)arg1;
- (void)_engineStatusChanged:(id)arg1;
- (void)_updateStatusField;
- (void)_updateQuotaBarWithSize:(unsigned long long)arg1 maxSize:(unsigned long long)arg2 count:(long long)arg3 maxCount:(long long)arg4;
- (id)_selectedQuotaName;
- (void)quotaPopupChanged:(id)arg1;
- (BOOL)tableShouldIncludeMailbox:(id)arg1;
- (Class)engineClass;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithAccount:(id)arg1;

@end

