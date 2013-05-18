#ifdef LUA_EQEMU

#include "masterentity.h"
#include "lua_item.h"
#include "lua_iteminst.h"
#include "lua_mob.h"
#include "lua_hate_entry.h"
#include "lua_hate_list.h"
#include "lua_client.h"

Lua_Mob::Lua_Illusion::Lua_Illusion() {
	in_race = 0;
	in_gender = 255;
	in_texture = 255;
	in_helmtexture = 255;
	in_haircolor = 255;
	in_beardcolor = 255;
	in_eyecolor1 = 255;
	in_eyecolor2 = 255;
	in_hairstyle = 255;
	in_luclinface = 255;
	in_beard = 255;
	in_aa_title = 255;
	in_drakkin_heritage = 4294967295;
	in_drakkin_tattoo = 4294967295;
	in_drakkin_details = 4294967295;
	in_size = -1.0;
}

const char *Lua_Mob::GetName() {
	Lua_Safe_Call_String();
	return self->GetName();
}

void Lua_Mob::Depop() {
	Lua_Safe_Call_Void();
	return self->Depop();
}

void Lua_Mob::Depop(bool start_spawn_timer) {
	Lua_Safe_Call_Void();
	return self->Depop(start_spawn_timer);
}

bool Lua_Mob::BehindMob() {
	Lua_Safe_Call_Bool();
	return self->BehindMob();
}

bool Lua_Mob::BehindMob(Lua_Mob other) {
	Lua_Safe_Call_Bool();
	return self->BehindMob(other);
}

bool Lua_Mob::BehindMob(Lua_Mob other, float x) {
	Lua_Safe_Call_Bool();
	return self->BehindMob(other, x);
}

bool Lua_Mob::BehindMob(Lua_Mob other, float x, float y) {
	Lua_Safe_Call_Bool();
	return self->BehindMob(other, x, y);
}

void Lua_Mob::SetLevel(int level) {
	Lua_Safe_Call_Void();
	self->SetLevel(level);
}

void Lua_Mob::SetLevel(int level, bool command) {
	Lua_Safe_Call_Void();
	self->SetLevel(level, command);
}

void Lua_Mob::SendWearChange(int material_slot) {
	Lua_Safe_Call_Void();
	self->SendWearChange(material_slot);
}

bool Lua_Mob::IsMoving() {
	Lua_Safe_Call_Bool();
	return self->IsMoving();
}

void Lua_Mob::GotoBind() {
	Lua_Safe_Call_Void();
	self->GoToBind();
}

void Lua_Mob::Gate() {
	Lua_Safe_Call_Void();
	self->Gate();
}

bool Lua_Mob::Attack(Lua_Mob other) {
	Lua_Safe_Call_Bool();
	return self->Attack(other);
}

bool Lua_Mob::Attack(Lua_Mob other, int hand) {
	Lua_Safe_Call_Bool();
	return self->Attack(other, hand);
}

bool Lua_Mob::Attack(Lua_Mob other, int hand, bool from_riposte) {
	Lua_Safe_Call_Bool();
	return self->Attack(other, hand, from_riposte);
}

bool Lua_Mob::Attack(Lua_Mob other, int hand, bool from_riposte, bool is_strikethrough) {
	Lua_Safe_Call_Bool();
	return self->Attack(other, hand, from_riposte, is_strikethrough);
}

bool Lua_Mob::Attack(Lua_Mob other, int hand, bool from_riposte, bool is_strikethrough, bool is_from_spell) {
	Lua_Safe_Call_Bool();
	return self->Attack(other, hand, from_riposte, is_strikethrough, is_from_spell);
}

void Lua_Mob::Damage(Lua_Mob from, int damage, int spell_id, int attack_skill) {
	Lua_Safe_Call_Void();
	return self->Damage(from, damage, spell_id, static_cast<SkillType>(attack_skill));
}

void Lua_Mob::Damage(Lua_Mob from, int damage, int spell_id, int attack_skill, bool avoidable) {
	Lua_Safe_Call_Void();
	return self->Damage(from, damage, spell_id, static_cast<SkillType>(attack_skill), avoidable);
}

void Lua_Mob::Damage(Lua_Mob from, int damage, int spell_id, int attack_skill, bool avoidable, int buffslot) {
	Lua_Safe_Call_Void();
	return self->Damage(from, damage, spell_id, static_cast<SkillType>(attack_skill), avoidable, buffslot);
}

void Lua_Mob::Damage(Lua_Mob from, int damage, int spell_id, int attack_skill, bool avoidable, int buffslot, bool buff_tic) {
	Lua_Safe_Call_Void();
	return self->Damage(from, damage, spell_id, static_cast<SkillType>(attack_skill), avoidable, buffslot, buff_tic);
}

void Lua_Mob::RangedAttack(Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->RangedAttack(other);
}

void Lua_Mob::ThrowingAttack(Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->ThrowingAttack(other);
}

void Lua_Mob::Heal() {
	Lua_Safe_Call_Void();
	self->Heal();
}

void Lua_Mob::HealDamage(uint32 amount) {
	Lua_Safe_Call_Void();
	self->HealDamage(amount);
}

void Lua_Mob::HealDamage(uint32 amount, Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->HealDamage(amount, other);
}

uint32 Lua_Mob::GetLevelCon(int other) {
	Lua_Safe_Call_Int();
	return self->GetLevelCon(other);
}

uint32 Lua_Mob::GetLevelCon(int my, int other) {
	Lua_Safe_Call_Int();
	return self->GetLevelCon(my, other);
}

void Lua_Mob::SetHP(int hp) {
	Lua_Safe_Call_Void();
	self->SetHP(hp);
}

void Lua_Mob::DoAnim(int anim_num) {
	Lua_Safe_Call_Void();
	self->DoAnim(anim_num);
}

void Lua_Mob::DoAnim(int anim_num, int type) {
	Lua_Safe_Call_Void();
	self->DoAnim(anim_num, type);
}

void Lua_Mob::DoAnim(int anim_num, int type, bool ackreq) {
	Lua_Safe_Call_Void();
	self->DoAnim(anim_num, type, ackreq);
}

void Lua_Mob::DoAnim(int anim_num, int type, bool ackreq, int filter) {
	Lua_Safe_Call_Void();
	self->DoAnim(anim_num, type, ackreq, static_cast<eqFilterType>(filter));
}

void Lua_Mob::ChangeSize(double in_size) {
	Lua_Safe_Call_Void();
	self->ChangeSize(static_cast<float>(in_size));
}

void Lua_Mob::ChangeSize(double in_size, bool no_restriction) {
	Lua_Safe_Call_Void();
	self->ChangeSize(static_cast<float>(in_size), no_restriction);
}

void Lua_Mob::GMMove(double x, double y, double z) {
	Lua_Safe_Call_Void();
	self->GMMove(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void Lua_Mob::GMMove(double x, double y, double z, double heading) {
	Lua_Safe_Call_Void();
	self->GMMove(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(heading));
}

void Lua_Mob::GMMove(double x, double y, double z, double heading, bool send_update) {
	Lua_Safe_Call_Void();
	self->GMMove(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(heading), send_update);
}

bool Lua_Mob::HasProcs() {
	Lua_Safe_Call_Bool();
	return self->HasProcs();
}

bool Lua_Mob::IsInvisible() {
	Lua_Safe_Call_Bool();
	return self->IsInvisible();
}

bool Lua_Mob::IsInvisible(Lua_Mob other) {
	Lua_Safe_Call_Bool();
	return self->IsInvisible(other);
}

void Lua_Mob::SetInvisible(int state) {
	Lua_Safe_Call_Void();
	self->SetInvisible(state);
}

bool Lua_Mob::FindBuff(int spell_id) {
	Lua_Safe_Call_Bool();
	return self->FindBuff(spell_id);
}

bool Lua_Mob::FindType(int type) {
	Lua_Safe_Call_Bool();
	return self->FindType(type);
}

bool Lua_Mob::FindType(int type, bool offensive) {
	Lua_Safe_Call_Bool();
	return self->FindType(type, offensive);
}

bool Lua_Mob::FindType(int type, bool offensive, int threshold) {
	Lua_Safe_Call_Bool();
	return self->FindType(type, offensive, threshold);
}

int Lua_Mob::GetBuffSlotFromType(int slot) {
	Lua_Safe_Call_Bool();
	return self->GetBuffSlotFromType(slot);
}

int Lua_Mob::GetBaseRace() {
	Lua_Safe_Call_Int();
	return self->GetBaseRace();
}

int Lua_Mob::GetBaseGender() {
	Lua_Safe_Call_Int();
	return self->GetBaseGender();
}

int Lua_Mob::GetDeity() {
	Lua_Safe_Call_Int();
	return self->GetDeity();
}

int Lua_Mob::GetRace() {
	Lua_Safe_Call_Int();
	return self->GetRace();
}

int Lua_Mob::GetGender() {
	Lua_Safe_Call_Int();
	return self->GetGender();
}

int Lua_Mob::GetTexture() {
	Lua_Safe_Call_Int();
	return self->GetTexture();
}

int Lua_Mob::GetHelmTexture() {
	Lua_Safe_Call_Int();
	return self->GetHelmTexture();
}

int Lua_Mob::GetHairColor() {
	Lua_Safe_Call_Int();
	return self->GetHairColor();
}

int Lua_Mob::GetBeardColor() {
	Lua_Safe_Call_Int();
	return self->GetBeardColor();
}

int Lua_Mob::GetEyeColor1() {
	Lua_Safe_Call_Int();
	return self->GetEyeColor1();
}

int Lua_Mob::GetEyeColor2() {
	Lua_Safe_Call_Int();
	return self->GetEyeColor2();
}

int Lua_Mob::GetHairStyle() {
	Lua_Safe_Call_Int();
	return self->GetHairStyle();
}

int Lua_Mob::GetLuclinFace() {
	Lua_Safe_Call_Int();
	return self->GetLuclinFace();
}

int Lua_Mob::GetBeard() {
	Lua_Safe_Call_Int();
	return self->GetBeard();
}

int Lua_Mob::GetDrakkinHeritage() {
	Lua_Safe_Call_Int();
	return self->GetDrakkinHeritage();
}

int Lua_Mob::GetDrakkinTattoo() {
	Lua_Safe_Call_Int();
	return self->GetDrakkinTattoo();
}

int Lua_Mob::GetDrakkinDetails() {
	Lua_Safe_Call_Int();
	return self->GetDrakkinDetails();
}

int Lua_Mob::GetClass() {
	Lua_Safe_Call_Int();
	return self->GetClass();
}

int Lua_Mob::GetLevel() {
	Lua_Safe_Call_Int();
	return self->GetLevel();
}

const char *Lua_Mob::GetCleanName() {
	Lua_Safe_Call_String();
	return self->GetCleanName();
}

Lua_Mob Lua_Mob::GetTarget() {
	Lua_Safe_Call_Mob();
	return Lua_Mob(self->GetTarget());
}

void Lua_Mob::SetTarget(Lua_Mob t) {
	Lua_Safe_Call_Void();
	self->SetTarget(t);
}

double Lua_Mob::GetHPRatio() {
	Lua_Safe_Call_Real();
	return self->GetHPRatio();
}

bool Lua_Mob::IsWarriorClass() {
	Lua_Safe_Call_Bool();
	return self->IsWarriorClass();
}

int Lua_Mob::GetHP() {
	Lua_Safe_Call_Int();
	return self->GetHP();
}

int Lua_Mob::GetMaxHP() {
	Lua_Safe_Call_Int();
	return self->GetMaxHP();
}

int Lua_Mob::GetItemHPBonuses() {
	Lua_Safe_Call_Int();
	return self->GetItemHPBonuses();
}

int Lua_Mob::GetSpellHPBonuses() {
	Lua_Safe_Call_Int();
	return self->GetSpellHPBonuses();
}

double Lua_Mob::GetWalkspeed() {
	Lua_Safe_Call_Real();
	return self->GetWalkspeed();
}

double Lua_Mob::GetRunspeed() {
	Lua_Safe_Call_Real();
	return self->GetRunspeed();
}

int Lua_Mob::GetCasterLevel(int spell_id) {
	Lua_Safe_Call_Int();
	return self->GetCasterLevel(spell_id);
}

int Lua_Mob::GetMaxMana() {
	Lua_Safe_Call_Int();
	return self->GetMaxMana();
}

int Lua_Mob::GetMana() {
	Lua_Safe_Call_Int();
	return self->GetMana();
}

int Lua_Mob::SetMana(int mana) {
	Lua_Safe_Call_Int();
	return self->SetMana(mana);
}

double Lua_Mob::GetManaRatio() {
	Lua_Safe_Call_Real();
	return self->GetManaRatio();
}

int Lua_Mob::GetAC() {
	Lua_Safe_Call_Int();
	return self->GetAC();
}

int Lua_Mob::GetATK() {
	Lua_Safe_Call_Int();
	return self->GetATK();
}

int Lua_Mob::GetSTR() {
	Lua_Safe_Call_Int();
	return self->GetSTR();
}

int Lua_Mob::GetSTA() {
	Lua_Safe_Call_Int();
	return self->GetSTA();
}

int Lua_Mob::GetDEX() {
	Lua_Safe_Call_Int();
	return self->GetDEX();
}

int Lua_Mob::GetAGI() {
	Lua_Safe_Call_Int();
	return self->GetAGI();
}

int Lua_Mob::GetINT() {
	Lua_Safe_Call_Int();
	return self->GetINT();
}

int Lua_Mob::GetWIS() {
	Lua_Safe_Call_Int();
	return self->GetWIS();
}

int Lua_Mob::GetCHA() {
	Lua_Safe_Call_Int();
	return self->GetCHA();
}

int Lua_Mob::GetMR() {
	Lua_Safe_Call_Int();
	return self->GetMR();
}

int Lua_Mob::GetFR() {
	Lua_Safe_Call_Int();
	return self->GetFR();
}

int Lua_Mob::GetDR() {
	Lua_Safe_Call_Int();
	return self->GetDR();
}

int Lua_Mob::GetPR() {
	Lua_Safe_Call_Int();
	return self->GetPR();
}

int Lua_Mob::GetCR() {
	Lua_Safe_Call_Int();
	return self->GetCR();
}

int Lua_Mob::GetCorruption() {
	Lua_Safe_Call_Int();
	return self->GetCorrup();
}

int Lua_Mob::GetMaxSTR() {
	Lua_Safe_Call_Int();
	return self->GetMaxSTR();
}

int Lua_Mob::GetMaxSTA() {
	Lua_Safe_Call_Int();
	return self->GetMaxSTA();
}

int Lua_Mob::GetMaxDEX() {
	Lua_Safe_Call_Int();
	return self->GetMaxDEX();
}

int Lua_Mob::GetMaxAGI() {
	Lua_Safe_Call_Int();
	return self->GetMaxAGI();
}

int Lua_Mob::GetMaxINT() {
	Lua_Safe_Call_Int();
	return self->GetMaxINT();
}

int Lua_Mob::GetMaxWIS() {
	Lua_Safe_Call_Int();
	return self->GetMaxWIS();
}

int Lua_Mob::GetMaxCHA() {
	Lua_Safe_Call_Int();
	return self->GetMaxCHA();
}

double Lua_Mob::ResistSpell(int resist_type, int spell_id, Lua_Mob caster) {
	Lua_Safe_Call_Real();
	return self->ResistSpell(resist_type, spell_id, caster);
}

double Lua_Mob::ResistSpell(int resist_type, int spell_id, Lua_Mob caster, bool use_resist_override) {
	Lua_Safe_Call_Real();
	return self->ResistSpell(resist_type, spell_id, caster, use_resist_override);
}

double Lua_Mob::ResistSpell(int resist_type, int spell_id, Lua_Mob caster, bool use_resist_override, int resist_override) {
	Lua_Safe_Call_Real();
	return self->ResistSpell(resist_type, spell_id, caster, use_resist_override, resist_override);
}

double Lua_Mob::ResistSpell(int resist_type, int spell_id, Lua_Mob caster, bool use_resist_override, int resist_override, 
	bool charisma_check) {
	Lua_Safe_Call_Real();
	return self->ResistSpell(resist_type, spell_id, caster, use_resist_override, resist_override, charisma_check);
}

int Lua_Mob::GetSpecializeSkillValue(int spell_id) {
	Lua_Safe_Call_Int();
	return self->GetSpecializeSkillValue(spell_id);
}

int Lua_Mob::GetNPCTypeID() {
	Lua_Safe_Call_Int();
	return self->GetNPCTypeID();
}

bool Lua_Mob::IsTargeted() {
	Lua_Safe_Call_Bool();
	return self->IsTargeted();
}

double Lua_Mob::GetX() {
	Lua_Safe_Call_Real();
	return self->GetX();
}

double Lua_Mob::GetY() {
	Lua_Safe_Call_Real();
	return self->GetY();
}

double Lua_Mob::GetZ() {
	Lua_Safe_Call_Real();
	return self->GetZ();
}

double Lua_Mob::GetHeading() {
	Lua_Safe_Call_Real();
	return self->GetHeading();
}

double Lua_Mob::GetWaypointX() {
	Lua_Safe_Call_Real();
	return self->GetCWPX();
}

double Lua_Mob::GetWaypointY() {
	Lua_Safe_Call_Real();
	return self->GetCWPY();
}

double Lua_Mob::GetWaypointZ() {
	Lua_Safe_Call_Real();
	return self->GetCWPZ();
}

double Lua_Mob::GetWaypointH() {
	Lua_Safe_Call_Real();
	return self->GetCWPH();
}

double Lua_Mob::GetWaypointPause() {
	Lua_Safe_Call_Real();
	return self->GetCWPP();
}

int Lua_Mob::GetWaypointID() {
	Lua_Safe_Call_Int();
	return self->GetCWP();
}

void Lua_Mob::SetCurrentWP(int wp) {
	Lua_Safe_Call_Void();
	self->SetCurrentWP(wp);
}

double Lua_Mob::GetSize() {
	Lua_Safe_Call_Real();
	return self->GetSize();
}

void Lua_Mob::Message(int type, const char *message) {
	Lua_Safe_Call_Void();
	self->Message(type, message);
}

void Lua_Mob::Message_StringID(int type, int string_id, uint32 distance) {
	Lua_Safe_Call_Void();
	self->Message_StringID(type, string_id, distance);
}

void Lua_Mob::Say(const char *message) {
	Lua_Safe_Call_Void();
	self->Say(message);
}

void Lua_Mob::QuestSay(Lua_Client client, const char *message) {
	Lua_Safe_Call_Void();
	self->QuestJournalledSay(client, message);
}

void Lua_Mob::Shout(const char *message) {
	Lua_Safe_Call_Void();
	self->Shout(message);
}

void Lua_Mob::Emote(const char *message) {
	Lua_Safe_Call_Void();
	self->Emote(message);
}

void Lua_Mob::InterruptSpell() {
	Lua_Safe_Call_Void();
	self->InterruptSpell();
}

void Lua_Mob::InterruptSpell(int spell_id) {
	Lua_Safe_Call_Void();
	self->InterruptSpell(spell_id);
}

bool Lua_Mob::CastSpell(int spell_id, int target_id) {
	Lua_Safe_Call_Bool();
	return self->CastSpell(spell_id, target_id);
}

bool Lua_Mob::CastSpell(int spell_id, int target_id, int slot) {
	Lua_Safe_Call_Bool();
	return self->CastSpell(spell_id, target_id, slot);
}

bool Lua_Mob::CastSpell(int spell_id, int target_id, int slot, int cast_time) {
	Lua_Safe_Call_Bool();
	return self->CastSpell(spell_id, target_id, slot, cast_time);
}

bool Lua_Mob::CastSpell(int spell_id, int target_id, int slot, int cast_time, int mana_cost) {
	Lua_Safe_Call_Bool();
	return self->CastSpell(spell_id, target_id, slot, cast_time, mana_cost);
}

bool Lua_Mob::CastSpell(int spell_id, int target_id, int slot, int cast_time, int mana_cost, int item_slot) {
	Lua_Safe_Call_Bool();
	return self->CastSpell(spell_id, target_id, slot, cast_time, mana_cost, nullptr, static_cast<uint32>(item_slot));
}

bool Lua_Mob::CastSpell(int spell_id, int target_id, int slot, int cast_time, int mana_cost, int item_slot, int timer, 
	int timer_duration) {
	Lua_Safe_Call_Bool();
	return self->CastSpell(spell_id, target_id, slot, cast_time, mana_cost, nullptr, static_cast<uint32>(item_slot), 
		static_cast<uint32>(timer), static_cast<uint32>(timer_duration));
}

bool Lua_Mob::CastSpell(int spell_id, int target_id, int slot, int cast_time, int mana_cost, int item_slot, int timer, 
	int timer_duration, int resist_adjust) {
	Lua_Safe_Call_Bool();
	int16 res = resist_adjust;

	return self->CastSpell(spell_id, target_id, slot, cast_time, mana_cost, nullptr, static_cast<uint32>(item_slot), 
		static_cast<uint32>(timer), static_cast<uint32>(timer_duration), 0, &res);
}

bool Lua_Mob::SpellFinished(int spell_id, Lua_Mob target) {
	Lua_Safe_Call_Bool();
	return self->SpellFinished(spell_id, target);
}

bool Lua_Mob::SpellFinished(int spell_id, Lua_Mob target, int slot) {
	Lua_Safe_Call_Bool();
	return self->SpellFinished(spell_id, target, slot);
}

bool Lua_Mob::SpellFinished(int spell_id, Lua_Mob target, int slot, int mana_used) {
	Lua_Safe_Call_Bool();
	return self->SpellFinished(spell_id, target, slot, mana_used);
}

bool Lua_Mob::SpellFinished(int spell_id, Lua_Mob target, int slot, int mana_used, uint32 inventory_slot) {
	Lua_Safe_Call_Bool();
	return self->SpellFinished(spell_id, target, slot, mana_used, inventory_slot);
}

bool Lua_Mob::SpellFinished(int spell_id, Lua_Mob target, int slot, int mana_used, uint32 inventory_slot, int resist_adjust) {
	Lua_Safe_Call_Bool();
	return self->SpellFinished(spell_id, target, slot, mana_used, inventory_slot, resist_adjust);
}

bool Lua_Mob::SpellFinished(int spell_id, Lua_Mob target, int slot, int mana_used, uint32 inventory_slot, int resist_adjust, bool proc) {
	Lua_Safe_Call_Bool();
	return self->SpellFinished(spell_id, target, slot, mana_used, inventory_slot, resist_adjust, proc);
}

void Lua_Mob::SpellEffect(Lua_Mob caster, int spell_id, double partial) {
	Lua_Safe_Call_Void();
	self->SpellEffect(caster, spell_id, static_cast<float>(partial));
}

Lua_Mob Lua_Mob::GetPet() {
	Lua_Safe_Call_Mob();
	return Lua_Mob(self->GetPet());
}

Lua_Mob Lua_Mob::GetOwner() {
	Lua_Safe_Call_Mob();
	return Lua_Mob(self->GetOwner());
}

Lua_HateList Lua_Mob::GetHateList() {
	Lua_Safe_Call_HateList();
	Lua_HateList ret;
	
	auto h_list = self->GetHateList();
	auto iter = h_list.begin();
	while(iter != h_list.end()) {
		Lua_HateEntry e(*iter);
		ret.entries.push_back(e);
		++iter;
	}

	return ret;
}

Lua_Mob Lua_Mob::GetHateTop() {
	Lua_Safe_Call_Mob();
	return Lua_Mob(self->GetHateTop());
}

Lua_Mob Lua_Mob::GetHateDamageTop(Lua_Mob other) {
	Lua_Safe_Call_Mob();
	return Lua_Mob(self->GetHateDamageTop(other));
}

Lua_Mob Lua_Mob::GetHateRandom() {
	Lua_Safe_Call_Mob();
	return Lua_Mob(self->GetHateRandom());
}

void Lua_Mob::AddToHateList(Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->AddToHateList(other);
}

void Lua_Mob::AddToHateList(Lua_Mob other, int hate) {
	Lua_Safe_Call_Void();
	self->AddToHateList(other, hate);
}

void Lua_Mob::AddToHateList(Lua_Mob other, int hate, int damage) {
	Lua_Safe_Call_Void();
	self->AddToHateList(other, hate, damage);
}

void Lua_Mob::AddToHateList(Lua_Mob other, int hate, int damage, bool yell_for_help) {
	Lua_Safe_Call_Void();
	self->AddToHateList(other, hate, damage, yell_for_help);
}

void Lua_Mob::AddToHateList(Lua_Mob other, int hate, int damage, bool yell_for_help, bool frenzy) {
	Lua_Safe_Call_Void();
	self->AddToHateList(other, hate, damage, yell_for_help, frenzy);
}

void Lua_Mob::AddToHateList(Lua_Mob other, int hate, int damage, bool yell_for_help, bool frenzy, bool buff_tic) {
	Lua_Safe_Call_Void();
	self->AddToHateList(other, hate, damage, yell_for_help, frenzy, buff_tic);
}

void Lua_Mob::SetHate(Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->SetHate(other);
}

void Lua_Mob::SetHate(Lua_Mob other, int hate) {
	Lua_Safe_Call_Void();
	self->SetHate(other, hate);
}

void Lua_Mob::SetHate(Lua_Mob other, int hate, int damage) {
	Lua_Safe_Call_Void();
	self->SetHate(other, hate, damage);
}

uint32 Lua_Mob::GetHateAmount(Lua_Mob target) {
	Lua_Safe_Call_Int();
	return self->GetHateAmount(target);
}

uint32 Lua_Mob::GetHateAmount(Lua_Mob target, bool is_damage) {
	Lua_Safe_Call_Int();
	return self->GetHateAmount(target, is_damage);
}

uint32 Lua_Mob::GetDamageAmount(Lua_Mob target) {
	Lua_Safe_Call_Int();
	return self->GetDamageAmount(target);
}

void Lua_Mob::WipeHateList() {
	Lua_Safe_Call_Void();
	self->WipeHateList();
}

bool Lua_Mob::CheckAggro(Lua_Mob other) {
	Lua_Safe_Call_Bool();
	return self->CheckAggro(other);
}

void Lua_Mob::Stun(int duration) {
	Lua_Safe_Call_Void();
	self->Stun(duration);
}

void Lua_Mob::UnStun() {
	Lua_Safe_Call_Void();
	self->UnStun();
}

bool Lua_Mob::IsStunned() {
	Lua_Safe_Call_Bool();
	return self->IsStunned();
}

void Lua_Mob::Spin() {
	Lua_Safe_Call_Void();
	self->Spin();
}

void Lua_Mob::Kill() {
	Lua_Safe_Call_Void();
	self->Kill();
}

bool Lua_Mob::CanThisClassDoubleAttack() {
	Lua_Safe_Call_Bool();
	return self->CanThisClassDoubleAttack();
}

bool Lua_Mob::CanThisClassDualWield() {
	Lua_Safe_Call_Bool();
	return self->CanThisClassDualWield();
}

bool Lua_Mob::CanThisClassRiposte() {
	Lua_Safe_Call_Bool();
	return self->CanThisClassRiposte();
}

bool Lua_Mob::CanThisClassDodge() {
	Lua_Safe_Call_Bool();
	return self->CanThisClassDodge();
}

bool Lua_Mob::CanThisClassParry() {
	Lua_Safe_Call_Bool();
	return self->CanThisClassParry();
}

bool Lua_Mob::CanThisClassBlock() {
	Lua_Safe_Call_Bool();
	return self->CanThisClassBlock();
}

void Lua_Mob::SetInvul(bool value) {
	Lua_Safe_Call_Void();
	self->SetInvul(value);
}

bool Lua_Mob::GetInvul() {
	Lua_Safe_Call_Bool();
	return self->GetInvul();
}

void Lua_Mob::SetExtraHaste(int haste) {
	Lua_Safe_Call_Void();
	self->SetExtraHaste(haste);
}

int Lua_Mob::GetHaste() {
	Lua_Safe_Call_Int();
	return self->GetHaste();
}

int Lua_Mob::GetMonkHandToHandDamage() {
	Lua_Safe_Call_Int();
	return self->GetMonkHandToHandDamage();
}

int Lua_Mob::GetMonkHandToHandDelay() {
	Lua_Safe_Call_Int();
	return self->GetMonkHandToHandDelay();
}

void Lua_Mob::Mesmerize() {
	Lua_Safe_Call_Void();
	self->Mesmerize();
}

bool Lua_Mob::IsMezzed() {
	Lua_Safe_Call_Bool();
	return self->IsMezzed();
}

bool Lua_Mob::IsEnraged() {
	Lua_Safe_Call_Bool();
	return self->IsEnraged();
}

int Lua_Mob::GetReverseFactionCon(Lua_Mob other) {
	Lua_Safe_Call_Int();
	return self->GetReverseFactionCon(other);
}

bool Lua_Mob::IsAIControlled() {
	Lua_Safe_Call_Bool();
	return self->IsAIControlled();
}

float Lua_Mob::GetAggroRange() {
	Lua_Safe_Call_Real();
	return self->GetAggroRange();
}

float Lua_Mob::GetAssistRange() {
	Lua_Safe_Call_Real();
	return self->GetAssistRange();
}

void Lua_Mob::SetPetOrder(int order) {
	Lua_Safe_Call_Void();
	self->SetPetOrder(static_cast<Mob::eStandingPetOrder>(order));
}

int Lua_Mob::GetPetOrder() {
	Lua_Safe_Call_Int();
	return self->GetPetOrder();
}

bool Lua_Mob::IsRoamer() {
	Lua_Safe_Call_Bool();
	return self->IsRoamer();
}

bool Lua_Mob::IsRooted() {
	Lua_Safe_Call_Bool();
	return self->IsRooted();
}

bool Lua_Mob::IsEngaged() {
	Lua_Safe_Call_Bool();
	return self->IsEngaged();
}

void Lua_Mob::FaceTarget(Lua_Mob target) {
	Lua_Safe_Call_Void();
	self->FaceTarget(target);
}

void Lua_Mob::SetHeading(double in) {
	Lua_Safe_Call_Void();
	self->SetHeading(static_cast<float>(in));
}

double Lua_Mob::CalculateHeadingToTarget(double in_x, double in_y) {
	Lua_Safe_Call_Real();
	return self->CalculateHeadingToTarget(static_cast<float>(in_x), static_cast<float>(in_y));
}

bool Lua_Mob::CalculateNewPosition(double x, double y, double z, double speed) {
	Lua_Safe_Call_Bool();
	return self->CalculateNewPosition(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(speed));
}

bool Lua_Mob::CalculateNewPosition(double x, double y, double z, double speed, bool check_z) {
	Lua_Safe_Call_Bool();
	return self->CalculateNewPosition(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(speed),
		check_z);
}

bool Lua_Mob::CalculateNewPosition2(double x, double y, double z, double speed) {
	Lua_Safe_Call_Bool();
	return self->CalculateNewPosition2(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(speed));
}

bool Lua_Mob::CalculateNewPosition2(double x, double y, double z, double speed, bool check_z) {
	Lua_Safe_Call_Bool();
	return self->CalculateNewPosition2(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(speed),
		check_z);
}

float Lua_Mob::CalculateDistance(double x, double y, double z) {
	Lua_Safe_Call_Real();
	return self->CalculateDistance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void Lua_Mob::SendTo(double x, double y, double z) {
	Lua_Safe_Call_Void();
	self->SendTo(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void Lua_Mob::SendToFixZ(double x, double y, double z) {
	Lua_Safe_Call_Void();
	self->SendToFixZ(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void Lua_Mob::NPCSpecialAttacks(const char *parse, int perm) {
	Lua_Safe_Call_Void();
	self->NPCSpecialAttacks(parse, perm);
}

void Lua_Mob::NPCSpecialAttacks(const char *parse, int perm, bool reset) {
	Lua_Safe_Call_Void();
	self->NPCSpecialAttacks(parse, perm, reset);
}

void Lua_Mob::NPCSpecialAttacks(const char *parse, int perm, bool reset, bool remove) {
	Lua_Safe_Call_Void();
	self->NPCSpecialAttacks(parse, perm, reset, remove);
}

int Lua_Mob::GetResist(int type) {
	Lua_Safe_Call_Int();
	return self->GetResist(type);
}

bool Lua_Mob::Charmed() {
	Lua_Safe_Call_Bool();
	return self->Charmed();
}

int Lua_Mob::CheckAggroAmount(int spell_id) {
	Lua_Safe_Call_Int();
	return self->CheckAggroAmount(spell_id);
}

int Lua_Mob::CheckAggroAmount(int spell_id, bool is_proc) {
	Lua_Safe_Call_Int();
	return self->CheckAggroAmount(spell_id, is_proc);
}

int Lua_Mob::CheckHealAggroAmount(int spell_id) {
	Lua_Safe_Call_Int();
	return self->CheckHealAggroAmount(spell_id);
}

int Lua_Mob::CheckHealAggroAmount(int spell_id, uint32 heal_possible) {
	Lua_Safe_Call_Int();
	return self->CheckHealAggroAmount(spell_id, heal_possible);
}

int Lua_Mob::GetAA(int id) {
	Lua_Safe_Call_Int();
	return self->GetAA(id);
}

bool Lua_Mob::DivineAura() {
	Lua_Safe_Call_Bool();
	return self->DivineAura();
}

void Lua_Mob::SetOOCRegen(int regen) {
	Lua_Safe_Call_Void();
	self->SetOOCRegen(regen);
}

const char* Lua_Mob::GetEntityVariable(const char *name) {
	Lua_Safe_Call_String();
	return self->GetEntityVariable(name);
}

void Lua_Mob::SetEntityVariable(const char *name, const char *value) {
	Lua_Safe_Call_Void();
	self->SetEntityVariable(name, value);
}

bool Lua_Mob::EntityVariableExists(const char *name) {
	Lua_Safe_Call_Bool();
	return self->EntityVariableExists(name);
}

void Lua_Mob::Signal(uint32 id) {
	Lua_Safe_Call_Void();
	
	if(self->IsClient()) {
		self->CastToClient()->Signal(id);
	} else if(self->IsNPC()) {
		self->CastToNPC()->SignalNPC(id);
	}
}

bool Lua_Mob::CombatRange(Lua_Mob other) {
	Lua_Safe_Call_Bool();
	return self->CombatRange(other);
}

void Lua_Mob::DoSpecialAttackDamage(Lua_Mob other, int skill, int max_damage) {
	Lua_Safe_Call_Void();
	self->DoSpecialAttackDamage(other, static_cast<SkillType>(skill), max_damage);
}

void Lua_Mob::DoSpecialAttackDamage(Lua_Mob other, int skill, int max_damage, int min_damage) {
	Lua_Safe_Call_Void();
	self->DoSpecialAttackDamage(other, static_cast<SkillType>(skill), max_damage, min_damage);
}

void Lua_Mob::DoSpecialAttackDamage(Lua_Mob other, int skill, int max_damage, int min_damage, int hate_override) {
	Lua_Safe_Call_Void();
	self->DoSpecialAttackDamage(other, static_cast<SkillType>(skill), max_damage, min_damage, hate_override);
}

void Lua_Mob::DoSpecialAttackDamage(Lua_Mob other, int skill, int max_damage, int min_damage, int hate_override, int reuse_time) {
	Lua_Safe_Call_Void();
	self->DoSpecialAttackDamage(other, static_cast<SkillType>(skill), max_damage, min_damage, hate_override, reuse_time);
}

void Lua_Mob::DoSpecialAttackDamage(Lua_Mob other, int skill, int max_damage, int min_damage, int hate_override, int reuse_time, 
									bool hit_chance) {
	Lua_Safe_Call_Void();
	self->DoSpecialAttackDamage(other, static_cast<SkillType>(skill), max_damage, min_damage, hate_override, reuse_time, hit_chance);
}

void Lua_Mob::DoThrowingAttackDmg(Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->DoThrowingAttackDmg(other);
}

void Lua_Mob::DoThrowingAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon) {
	Lua_Safe_Call_Void();
	self->DoThrowingAttackDmg(other, range_weapon);
}

void Lua_Mob::DoThrowingAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_Item item) {
	Lua_Safe_Call_Void();
	self->DoThrowingAttackDmg(other, range_weapon, item);
}

void Lua_Mob::DoThrowingAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_Item item, int weapon_damage) {
	Lua_Safe_Call_Void();
	self->DoThrowingAttackDmg(other, range_weapon, item, weapon_damage);
}

void Lua_Mob::DoThrowingAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_Item item, int weapon_damage, int chance_mod) {
	Lua_Safe_Call_Void();
	self->DoThrowingAttackDmg(other, range_weapon, item, weapon_damage, chance_mod);
}

void Lua_Mob::DoThrowingAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_Item item, int weapon_damage, int chance_mod, 
								  int focus) {
	Lua_Safe_Call_Void();
	self->DoThrowingAttackDmg(other, range_weapon, item, weapon_damage, chance_mod, focus);
}

void Lua_Mob::DoMeleeSkillAttackDmg(Lua_Mob other, int weapon_damage, int skill) {
	Lua_Safe_Call_Void();
	self->DoMeleeSkillAttackDmg(other, weapon_damage, static_cast<SkillType>(skill));
}

void Lua_Mob::DoMeleeSkillAttackDmg(Lua_Mob other, int weapon_damage, int skill, int chance_mod) {
	Lua_Safe_Call_Void();
	self->DoMeleeSkillAttackDmg(other, weapon_damage, static_cast<SkillType>(skill), chance_mod);
}

void Lua_Mob::DoMeleeSkillAttackDmg(Lua_Mob other, int weapon_damage, int skill, int chance_mod, int focus) {
	Lua_Safe_Call_Void();
	self->DoMeleeSkillAttackDmg(other, weapon_damage, static_cast<SkillType>(skill), chance_mod, focus);
}

void Lua_Mob::DoMeleeSkillAttackDmg(Lua_Mob other, int weapon_damage, int skill, int chance_mod, int focus, bool can_riposte) {
	Lua_Safe_Call_Void();
	self->DoMeleeSkillAttackDmg(other, weapon_damage, static_cast<SkillType>(skill), chance_mod, focus, can_riposte);
}

void Lua_Mob::DoArcheryAttackDmg(Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->DoArcheryAttackDmg(other);
}

void Lua_Mob::DoArcheryAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon) {
	Lua_Safe_Call_Void();
	self->DoArcheryAttackDmg(other, range_weapon);
}

void Lua_Mob::DoArcheryAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_ItemInst ammo) {
	Lua_Safe_Call_Void();
	self->DoArcheryAttackDmg(other, range_weapon, ammo);
}

void Lua_Mob::DoArcheryAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_ItemInst ammo, int weapon_damage) {
	Lua_Safe_Call_Void();
	self->DoArcheryAttackDmg(other, range_weapon, ammo, weapon_damage);
}

void Lua_Mob::DoArcheryAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_ItemInst ammo, int weapon_damage, int chance_mod) {
	Lua_Safe_Call_Void();
	self->DoArcheryAttackDmg(other, range_weapon, ammo, weapon_damage, chance_mod);
}

void Lua_Mob::DoArcheryAttackDmg(Lua_Mob other, Lua_ItemInst range_weapon, Lua_ItemInst ammo, int weapon_damage, int chance_mod, 
								 int focus) {
	Lua_Safe_Call_Void();
	self->DoArcheryAttackDmg(other, range_weapon, ammo, weapon_damage, chance_mod, focus);
}

bool Lua_Mob::CheckLoS(Lua_Mob other) {
	Lua_Safe_Call_Bool();
	return self->CheckLosFN(other);
}

bool Lua_Mob::CheckLoSToLoc(double x, double y, double z) {
	Lua_Safe_Call_Bool();
	return self->CheckLosFN(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), 6.0f);
}

bool Lua_Mob::CheckLoSToLoc(double x, double y, double z, double mob_size) {
	Lua_Safe_Call_Bool();
	return self->CheckLosFN(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(mob_size));
}

double Lua_Mob::FindGroundZ(double x, double y) {
	Lua_Safe_Call_Real();
	return self->GetGroundZ(static_cast<float>(x), static_cast<float>(y));
}

double Lua_Mob::FindGroundZ(double x, double y, double z) {
	Lua_Safe_Call_Real();
	return self->GetGroundZ(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void Lua_Mob::ProjectileAnimation(Lua_Mob to, int item_id) {
	Lua_Safe_Call_Void();
	self->ProjectileAnimation(to, item_id);
}

void Lua_Mob::ProjectileAnimation(Lua_Mob to, int item_id, bool is_arrow) {
	Lua_Safe_Call_Void();
	self->ProjectileAnimation(to, item_id, is_arrow);
}

void Lua_Mob::ProjectileAnimation(Lua_Mob to, int item_id, bool is_arrow, double speed) {
	Lua_Safe_Call_Void();
	self->ProjectileAnimation(to, item_id, is_arrow, static_cast<float>(speed));
}

void Lua_Mob::ProjectileAnimation(Lua_Mob to, int item_id, bool is_arrow, double speed, double angle) {
	Lua_Safe_Call_Void();
	self->ProjectileAnimation(to, item_id, is_arrow, static_cast<float>(speed), static_cast<float>(angle));
}

void Lua_Mob::ProjectileAnimation(Lua_Mob to, int item_id, bool is_arrow, double speed, double angle, double tilt) {
	Lua_Safe_Call_Void();
	self->ProjectileAnimation(to, item_id, is_arrow, static_cast<float>(speed), static_cast<float>(angle), static_cast<float>(tilt));
}

void Lua_Mob::ProjectileAnimation(Lua_Mob to, int item_id, bool is_arrow, double speed, double angle, double tilt, double arc) {
	Lua_Safe_Call_Void();
	self->ProjectileAnimation(to, item_id, is_arrow, static_cast<float>(speed), static_cast<float>(angle), static_cast<float>(tilt), 
		static_cast<float>(arc));
}

bool Lua_Mob::HasNPCSpecialAtk(const char *parse) {
	Lua_Safe_Call_Bool();
	return self->HasNPCSpecialAtk(parse);
}

void Lua_Mob::SendAppearanceEffect(uint32 parm1, uint32 parm2, uint32 parm3, uint32 parm4, uint32 parm5) {
	Lua_Safe_Call_Void();
	self->SendAppearanceEffect(parm1, parm2, parm3, parm4, parm5);
}

void Lua_Mob::SendAppearanceEffect(uint32 parm1, uint32 parm2, uint32 parm3, uint32 parm4, uint32 parm5, Lua_Client specific_target) {
	Lua_Safe_Call_Void();
	self->SendAppearanceEffect(parm1, parm2, parm3, parm4, parm5, specific_target);
}

void Lua_Mob::SetFlyMode(int in) {
	Lua_Safe_Call_Void();
	self->SetFlyMode(in);
}

void Lua_Mob::SetTexture(int in) {
	Lua_Safe_Call_Void();
	self->SendIllusionPacket(self->GetRace(), 0xFF, in);
}

void Lua_Mob::SetRace(int in) {
	Lua_Safe_Call_Void();
	self->SendIllusionPacket(in);
}

void Lua_Mob::SetGender(int in) {
	Lua_Safe_Call_Void();
	self->SendIllusionPacket(self->GetRace(), in);
}

void Lua_Mob::SendIllusionPacket(Lua_Mob::Lua_Illusion ill) {
	Lua_Safe_Call_Void();
	self->SendIllusionPacket(ill.in_race, ill.in_gender, ill.in_texture, ill.in_helmtexture, ill.in_haircolor, ill.in_beardcolor,
		ill.in_eyecolor1, ill.in_eyecolor2, ill.in_hairstyle, ill.in_luclinface, ill.in_beard, ill.in_aa_title,
		ill.in_drakkin_heritage, ill.in_drakkin_tattoo, ill.in_drakkin_details, static_cast<float>(ill.in_size));
}

void Lua_Mob::QuestReward(Lua_Client c) {
	Lua_Safe_Call_Void();
	self->QuestReward(c);
}

void Lua_Mob::QuestReward(Lua_Client c, uint32 silver) {
	Lua_Safe_Call_Void();
	self->QuestReward(c, silver);
}

void Lua_Mob::QuestReward(Lua_Client c, uint32 silver, uint32 gold) {
	Lua_Safe_Call_Void();
	self->QuestReward(c, silver, gold);
}

void Lua_Mob::QuestReward(Lua_Client c, uint32 silver, uint32 gold, uint32 platinum) {
	Lua_Safe_Call_Void();
	self->QuestReward(c, silver, gold, platinum);
}

void Lua_Mob::CameraEffect(uint32 duration, uint32 intensity) {
	Lua_Safe_Call_Void();
	self->CameraEffect(duration, intensity);
}

void Lua_Mob::CameraEffect(uint32 duration, uint32 intensity, Lua_Client c) {
	Lua_Safe_Call_Void();
	self->CameraEffect(duration, intensity, c);
}

void Lua_Mob::CameraEffect(uint32 duration, uint32 intensity, Lua_Client c, bool global) {
	Lua_Safe_Call_Void();
	self->CameraEffect(duration, intensity, c, global);
}

void Lua_Mob::SendSpellEffect(uint32 effect_id, uint32 duration, uint32 finish_delay, bool zone_wide, uint32 unk020) {
	Lua_Safe_Call_Void();
	self->SendSpellEffect(effect_id, duration, finish_delay, zone_wide, unk020);
}

void Lua_Mob::SendSpellEffect(uint32 effect_id, uint32 duration, uint32 finish_delay, bool zone_wide, uint32 unk020, bool perm_effect) {
	Lua_Safe_Call_Void();
	self->SendSpellEffect(effect_id, duration, finish_delay, zone_wide, unk020, perm_effect);
}

void Lua_Mob::SendSpellEffect(uint32 effect_id, uint32 duration, uint32 finish_delay, bool zone_wide, uint32 unk020, bool perm_effect, 
							  Lua_Client c) {
	Lua_Safe_Call_Void();
	self->SendSpellEffect(effect_id, duration, finish_delay, zone_wide, unk020, perm_effect, c);
}

void Lua_Mob::TempName() {
	Lua_Safe_Call_Void();
	self->TempName();
}

void Lua_Mob::TempName(const char *newname) {
	Lua_Safe_Call_Void();
	self->TempName(newname);
}

void Lua_Mob::SetGlobal(const char *varname, const char *newvalue, int options, const char *duration) {
	Lua_Safe_Call_Void();
	self->SetGlobal(varname, newvalue, options, duration);
}

void Lua_Mob::SetGlobal(const char *varname, const char *newvalue, int options, const char *duration, Lua_Mob other) {
	Lua_Safe_Call_Void();
	self->SetGlobal(varname, newvalue, options, duration, other);
}

void Lua_Mob::TarGlobal(const char *varname, const char *value, const char *duration, int npc_id, int char_id, int zone_id) {
	Lua_Safe_Call_Void();
	self->TarGlobal(varname, value, duration, npc_id, char_id, zone_id);
}

void Lua_Mob::DelGlobal(const char *varname) {
	Lua_Safe_Call_Void();
	self->DelGlobal(varname);
}

void Lua_Mob::SetSlotTint(int material_slot, int red_tint, int green_tint, int blue_tint) {
	Lua_Safe_Call_Void();
	self->SetSlotTint(material_slot, red_tint, green_tint, blue_tint);
}

void Lua_Mob::WearChange(int material_slot, int texture, uint32 color) {
	Lua_Safe_Call_Void();
	self->WearChange(material_slot, texture, color);
}

void Lua_Mob::DoKnockback(Lua_Mob caster, uint32 pushback, uint32 pushup) {
	Lua_Safe_Call_Void();
	self->DoKnockback(caster, pushback, pushup);
}

void Lua_Mob::RemoveNimbusEffect(int effect_id) {
	Lua_Safe_Call_Void();
	self->RemoveNimbusEffect(effect_id);
}

bool Lua_Mob::IsRunning() {
	Lua_Safe_Call_Bool();
	return self->IsRunning();
}

void Lua_Mob::SetRunning(bool running) {
	Lua_Safe_Call_Void();
	self->SetRunning(running);
}

void Lua_Mob::SetBodyType(int new_body, bool overwrite_orig) {
	Lua_Safe_Call_Void();
	self->SetBodyType(static_cast<bodyType>(new_body), overwrite_orig);
}

void Lua_Mob::SetTargetable(bool on) {
	Lua_Safe_Call_Void();
	self->SetTargetable(on);
}

void Lua_Mob::ModSkillDmgTaken(int skill, int value) {
	Lua_Safe_Call_Void();
	self->ModSkillDmgTaken(static_cast<SkillType>(skill), value);
}

int Lua_Mob::GetModSkillDmgTaken(int skill) {
	Lua_Safe_Call_Int();
	return self->GetModSkillDmgTaken(static_cast<SkillType>(skill));
}

int Lua_Mob::GetSkillDmgTaken(int skill) {
	Lua_Safe_Call_Int();
	return self->GetSkillDmgTaken(static_cast<SkillType>(skill));
}

void Lua_Mob::SetAllowBeneficial(bool value) {
	Lua_Safe_Call_Void();
	self->SetAllowBeneficial(value);
}

bool Lua_Mob::GetAllowBeneficial() {
	Lua_Safe_Call_Bool();
	return self->GetAllowBeneficial();
}

bool Lua_Mob::IsBeneficialAllowed(Lua_Mob target) {
	Lua_Safe_Call_Bool();
	return self->IsBeneficialAllowed(target);
}

void Lua_Mob::ModVulnerability(int resist, int value) {
	Lua_Safe_Call_Void();
	self->ModVulnerability(resist, value);
}

int Lua_Mob::GetModVulnerability(int resist) {
	Lua_Safe_Call_Int();
	return self->GetModVulnerability(resist);
}

void Lua_Mob::SetDisableMelee(bool disable) {
	Lua_Safe_Call_Void();
	self->SetDisableMelee(disable);
}

bool Lua_Mob::IsMeleeDisabled() {
	Lua_Safe_Call_Bool();
	return IsMeleeDisabled();
}

void Lua_Mob::SetFlurryChance(int value) {
	Lua_Safe_Call_Void();
	self->SetFlurryChance(value);
}

int Lua_Mob::GetFlurryChance() {
	Lua_Safe_Call_Int();
	return self->GetFlurryChance();
}

#endif