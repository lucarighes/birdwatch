#ifndef org_apache_lucene_analysis_wikipedia_WikipediaTokenizer_H
#define org_apache_lucene_analysis_wikipedia_WikipediaTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace wikipedia {

          class WikipediaTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_d503e4aa074a3bd8,
              mid_init$_eca10dfa1c3e8573,
              mid_close_f2cc1bce94666404,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WikipediaTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WikipediaTokenizer(const WikipediaTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint ACRONYM_ID;
            static jint ALPHANUM_ID;
            static jint APOSTROPHE_ID;
            static ::java::lang::String *BOLD;
            static jint BOLD_ID;
            static ::java::lang::String *BOLD_ITALICS;
            static jint BOLD_ITALICS_ID;
            static jint BOTH;
            static ::java::lang::String *CATEGORY;
            static jint CATEGORY_ID;
            static ::java::lang::String *CITATION;
            static jint CITATION_ID;
            static jint CJ_ID;
            static jint COMPANY_ID;
            static jint EMAIL_ID;
            static ::java::lang::String *EXTERNAL_LINK;
            static jint EXTERNAL_LINK_ID;
            static ::java::lang::String *EXTERNAL_LINK_URL;
            static jint EXTERNAL_LINK_URL_ID;
            static ::java::lang::String *HEADING;
            static jint HEADING_ID;
            static jint HOST_ID;
            static ::java::lang::String *INTERNAL_LINK;
            static jint INTERNAL_LINK_ID;
            static ::java::lang::String *ITALICS;
            static jint ITALICS_ID;
            static jint NUM_ID;
            static ::java::lang::String *SUB_HEADING;
            static jint SUB_HEADING_ID;
            static jint TOKENS_ONLY;
            static JArray< ::java::lang::String > *TOKEN_TYPES;
            static jint UNTOKENIZED_ONLY;
            static jint UNTOKENIZED_TOKEN_FLAG;

            WikipediaTokenizer();
            WikipediaTokenizer(jint, const ::java::util::Set &);
            WikipediaTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint, const ::java::util::Set &);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace wikipedia {
          extern PyType_Def PY_TYPE_DEF(WikipediaTokenizer);
          extern PyTypeObject *PY_TYPE(WikipediaTokenizer);

          class t_WikipediaTokenizer {
          public:
            PyObject_HEAD
            WikipediaTokenizer object;
            static PyObject *wrap_Object(const WikipediaTokenizer&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
