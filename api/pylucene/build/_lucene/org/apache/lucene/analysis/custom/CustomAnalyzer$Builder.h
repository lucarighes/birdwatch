#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharFilterFactory;
          class TokenizerFactory;
          class TokenFilterFactory;
        }
        namespace custom {
          class CustomAnalyzer$ConditionBuilder;
          class CustomAnalyzer;
          class CustomAnalyzer$Builder;
        }
        namespace miscellaneous {
          class ConditionalTokenFilterFactory;
        }
      }
      namespace util {
        class Version;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    namespace function {
      class Predicate;
    }
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {

          class CustomAnalyzer$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_addCharFilter_97bce99fec323e59,
              mid_addCharFilter_342fceef2cc644ae,
              mid_addCharFilter_1162bfb0f725f5aa,
              mid_addCharFilter_126dc67063c5e81b,
              mid_addTokenFilter_97bce99fec323e59,
              mid_addTokenFilter_342fceef2cc644ae,
              mid_addTokenFilter_1162bfb0f725f5aa,
              mid_addTokenFilter_126dc67063c5e81b,
              mid_build_0a14afaf8c9097b6,
              mid_when_0600069d9206f4b8,
              mid_when_b5659315bc690c84,
              mid_when_e2f75fcc1afd6e92,
              mid_when_eec22e805046d7ff,
              mid_when_f0669183a51fd5f6,
              mid_whenTerm_898aa5c1d3f81f59,
              mid_withDefaultMatchVersion_a788560561eb7010,
              mid_withOffsetGap_7fcec7141d7f3e26,
              mid_withPositionIncrementGap_7fcec7141d7f3e26,
              mid_withTokenizer_97bce99fec323e59,
              mid_withTokenizer_342fceef2cc644ae,
              mid_withTokenizer_1162bfb0f725f5aa,
              mid_withTokenizer_126dc67063c5e81b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomAnalyzer$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomAnalyzer$Builder(const CustomAnalyzer$Builder& obj) : ::java::lang::Object(obj) {}

            CustomAnalyzer$Builder addCharFilter(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addCharFilter(const ::java::lang::String &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder addTokenFilter(const ::java::lang::String &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer build() const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::Class &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder when(const ::java::lang::String &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$ConditionBuilder whenTerm(const ::java::util::function::Predicate &) const;
            CustomAnalyzer$Builder withDefaultMatchVersion(const ::org::apache::lucene::util::Version &) const;
            CustomAnalyzer$Builder withOffsetGap(jint) const;
            CustomAnalyzer$Builder withPositionIncrementGap(jint) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$Builder withTokenizer(const ::java::lang::String &, const ::java::util::Map &) const;
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
        namespace custom {
          extern PyType_Def PY_TYPE_DEF(CustomAnalyzer$Builder);
          extern PyTypeObject *PY_TYPE(CustomAnalyzer$Builder);

          class t_CustomAnalyzer$Builder {
          public:
            PyObject_HEAD
            CustomAnalyzer$Builder object;
            static PyObject *wrap_Object(const CustomAnalyzer$Builder&);
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
