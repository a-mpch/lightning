#include "config.h"
#include "../version.c"
#include "../json_command.c"
#include "../json_filter.c"
#include "../json_parse.c"
#include "../json_stream.c"
#include "../json_parse_simple.c"
#include <bitcoin/chainparams.h>
#include <common/setup.h>
#include <common/splice_script.h>
#include <assert.h>
#include <stdio.h>
#include <ccan/json_out/json_out.h>
/* Include the C files directly. */
#include <ccan/json_out/json_out.c>
#include <ccan/str/hex/hex.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for command_check_only */
bool command_check_only(const struct command *cmd UNNEEDED)
{ fprintf(stderr, "command_check_only called!\n"); abort(); }
/* Generated stub for command_dev_apis */
bool command_dev_apis(const struct command *cmd UNNEEDED)
{ fprintf(stderr, "command_dev_apis called!\n"); abort(); }
/* Generated stub for command_fail */
struct command_result *command_fail(struct command *cmd UNNEEDED, enum jsonrpc_errcode code UNNEEDED,
				    const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "command_fail called!\n"); abort(); }
/* Generated stub for command_filter_ptr */
struct json_filter **command_filter_ptr(struct command *cmd UNNEEDED)
{ fprintf(stderr, "command_filter_ptr called!\n"); abort(); }
/* Generated stub for command_log */
void command_log(struct command *cmd UNNEEDED, enum log_level level UNNEEDED,
		 const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "command_log called!\n"); abort(); }
const char *mvt_tag_str(enum mvt_tag tag UNNEEDED)
{ fprintf(stderr, "mvt_tag_str called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

static void set_node_id(struct splice_script_chan *chan, const char *hexstr)
{
	int result = hex_decode(hexstr, strlen(hexstr), &chan->node_id,
				sizeof(chan->node_id));
	assert(result);
}

static void set_chan_id(struct splice_script_chan *chan, const char *hexstr)
{
	int result = hex_decode(hexstr, strlen(hexstr), &chan->chan_id,
				sizeof(chan->chan_id));
	assert(result);
}


int main(int argc, char *argv[])
{
	size_t i, len;
	const char *str;
	struct splice_script_error *error;
	struct splice_script_result **result, **final;
	jsmntok_t *toks;
	struct splice_script_chan **channels;
	const char *script;
	struct splice_script_result *expect;

	common_setup(argv[0]);

	i = 0;
	channels = tal_arr(tmpctx, struct splice_script_chan*, 0);
	/* A */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0399069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120100");
	set_chan_id(channels[i], "f5699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2700");
	i++;
	/* B */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0393069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101");
	set_chan_id(channels[i], "f5699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2701");
	i++;
	/* C */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0393069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101");
	set_chan_id(channels[i], "f5699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2702");
	i++;
	/* D */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0393069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101");
	set_chan_id(channels[i], "f5699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2703");
	i++;
	/* E */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0393069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101");
	set_chan_id(channels[i], "f5699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2704");
	i++;
	/* F */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0393069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101");
	set_chan_id(channels[i], "f5699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2705");
	i++;
	/* G */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0394069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101");
	set_chan_id(channels[i], "f5699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2706");
	i++;
	/* H */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0394069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101");
	set_chan_id(channels[i], "f4699c3d5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2700");
	i++;
	/* I */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0394069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120102");
	set_chan_id(channels[i], "ffffffff5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2700");
	i++;
	/* J */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0394069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120103");
	set_chan_id(channels[i], "eeeeeeee5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2700");
	i++;
	/* K */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0394069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120103");
	set_chan_id(channels[i], "eeeeeeee5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2701");
	i++;
	/* L */
	tal_arr_expand(&channels, tal(channels, struct splice_script_chan));
	set_node_id(channels[i], "0394069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120104");
	set_chan_id(channels[i], "eeeeeeee5302e4486c83ef9d0f2d12a969ab41ccc9301bd042c50760a87b2702");
	i++;

	script = ""
		"0->0399:0->3M;\n" /* A */
		"3.000001M->bcrt1pp5ygqjg0q3mmv8ng8ceu59kl5a3etlf2vvryvnnyumvdyr8a77tqx507vk;\n"
		"wallet->1M;\n"
		"0->f4699c->3M;\n" /* H */
		"0->0393069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101:0->*;\n" /* B */
		"0->0393069f1693fd89a453f0caf03ee36b6f6c8abaa7ef778d3e2bcc7c2b44120101:?->12M;\n" /* C */
		"0->03930:*->*\n" /* D, E, F */
		"|4.91M@2%->*:?;\n" /* G */
		"25.010%|100K->*:?;\n" /* I */
		"*:?->+fee@40000;\n" /* J */
		"10.0003%->*:*;\n"; /* K, L */

	expect = tal_arr(tmpctx, struct splice_script_result, 15);
	i = 0;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[0]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(3000000);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(3000001);
	expect[i].in_ppm = 0;
	expect[i].channel_id = 0;
	expect[i].bitcoin_address = "bcrt1pp5ygqjg0q3mmv8ng8ceu59kl5a3etlf2vvryvnnyumvdyr8a77tqx507vk";
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = 0;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 1;
	expect[i].out_sat = AMOUNT_SAT(1000000);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[7]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(3000000);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[1]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = UINT32_MAX;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[2]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(12000000);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[3]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = UINT32_MAX;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[4]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = UINT32_MAX;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[5]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = UINT32_MAX;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(4910000);
	expect[i].lease_max_ppm = 20000;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[6]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(100000);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 250100;
	expect[i].channel_id = &channels[8]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 0;
	expect[i].channel_id = &channels[9]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 1;
	expect[i].feerate_per_kw = 40000;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 50001;
	expect[i].channel_id = &channels[10]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 50002;
	expect[i].channel_id = &channels[11]->chan_id;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 0;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;
	expect[i].lease_sat = AMOUNT_SAT(0);
	expect[i].lease_max_ppm = 0;
	expect[i].in_sat = AMOUNT_SAT(0);
	expect[i].in_ppm = 649897;
	expect[i].channel_id = 0;
	expect[i].bitcoin_address = 0;
	expect[i].onchain_wallet = 1;
	expect[i].out_sat = AMOUNT_SAT(0);
	expect[i].out_ppm = 0;
	expect[i].pays_fee = 0;
	expect[i].feerate_per_kw = 0;
	i++;

	assert(i == tal_count(expect));

	chainparams = chainparams_for_network("regtest");

	error = parse_splice_script(tmpctx, script, channels, &result);

	if (error) {
		printf("%s\n", fmt_splice_script_compiler_error(tmpctx, script,
								error));
		common_shutdown();
		abort();
	}

	struct json_stream *js = new_json_stream(tmpctx, NULL, NULL);

	splice_to_json(tmpctx, result, js);

	str = json_out_contents(js->jout, &len);

	printf("%.*s\n", (int)len, str);

	assert(str);

	toks = json_parse_simple(tmpctx, str, len);

	assert(toks);

	assert(json_to_splice(tmpctx, str, toks, &final));

	assert(tal_count(final) == tal_count(expect));

	for (i = 0; i < tal_count(expect); i++) {
		assert(amount_sat_eq(final[i]->lease_sat, expect[i].lease_sat));
		assert(final[i]->lease_max_ppm == expect[i].lease_max_ppm);
		assert(amount_sat_eq(final[i]->in_sat, expect[i].in_sat));
		assert(final[i]->in_ppm == expect[i].in_ppm);
		if (final[i]->channel_id != expect[i].channel_id)
			assert(channel_id_eq(final[i]->channel_id, expect[i].channel_id));
		if (final[i]->bitcoin_address != expect[i].bitcoin_address)
			assert(!strcmp(final[i]->bitcoin_address, expect[i].bitcoin_address));
		assert(final[i]->onchain_wallet == expect[i].onchain_wallet);
		assert(amount_sat_eq(final[i]->out_sat, expect[i].out_sat));
		assert(final[i]->out_ppm == expect[i].out_ppm);
		if (expect[i].pays_fee)
			assert(final[i]->pays_fee);
		else
			assert(!final[i]->pays_fee);
		assert(final[i]->feerate_per_kw == expect[i].feerate_per_kw);
	}

	printf("DRY RUN:\n%s", splicearr_to_string(tmpctx, final));

	common_shutdown();

	return 0;
}
